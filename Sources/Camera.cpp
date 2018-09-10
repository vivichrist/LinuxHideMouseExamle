#include "Camera.hpp"
#include <Kore/Graphics4/Graphics.h>
#include <Kore/Graphics4/PipelineState.h>
#include <Kore/Graphics4/VertexStructure.h>
#include <Kore/Input/Keyboard.h>
#include <Kore/Input/Mouse.h>
#include <Kore/Log.h>
#include <Kore/Math/Core.h>
#include <Kore/Math/Matrix.h>
#include <Kore/Math/Vector.h>
#include <Kore/System.h>
#include <string>
#include <sstream>

using namespace Kore;

namespace
{
const double PI_2 = Kore::pi / 2.0;

mat4 view;
mat4 projection;

int width = 1024;
int height = 768;
// var normalMatrixID:ConstantLocation;
mat4 mvp;
std::string mvpName = "P";
std::string viewMatrixName = "V";
Graphics4::ConstantLocation mvpID;
Graphics4::ConstantLocation viewMatrixID;

bool moveForward = false;
bool moveBackward = false;
bool strafeLeft = false;
bool strafeRight = false;
bool strafeUp = false;
bool strafeDown = false;
bool hasMouse = false;
float mouseDeltaX = 0.0;
float mouseDeltaY = 0.0;

double lastTime = 0.0, t;
float deltaTime; // for timing and movement update

vec3 position;		   // Initial position: on +Z
float horizontalAngle; // Initial horizontal angle: toward -Z
float verticalAngle;   // Initial vertical angle: none

float speed = 10.0; // 10 units / second
float mouseSpeed = 0.005;
uint scrollDelay = 0;

void onMouseDown( int windowId, int button, int x, int y )
{
	// TODO: ...
}
// toggle capture of the mouse when clicked
void onMouseUp( int windowId, int button, int x, int y )
{
	if ( button == 0 )
	{
		auto mouse = Mouse::the();
		if ( mouse->isLocked( windowId ) )
		{
			mouse->unlock( windowId );
		}
		else
		{
			mouse->lock( windowId );
		}
		hasMouse = !hasMouse;
	}
}

void onMouseMove( int windowId, int x, int y, int movementX, int movementY )
{
    if (hasMouse)
    {
        mouseDeltaX = movementX;
        mouseDeltaY = movementY;
    }
}

void onMouseWheel( int windowId, int delta )
{
	if ( delta < 0 )
	{
		strafeUp = true;
		strafeDown = false;
	}
	else if ( delta > 0 )
	{
		strafeUp = false;
		strafeDown = true;
	}
    std::stringstream str;
    str << "mouse wheel " << delta << "\n";
	log( Info, str.str().c_str());
	scrollDelay = 0;
}

void onKeyDown( KeyCode key )
{
    // std::stringstream str;
    // str << "key pressed "<< key << "\n";
	// log( Info, str.str().c_str());
	switch ( key )
	{
	case KeyW:
		moveForward = true;
		break;
	case KeyS:
		moveBackward = true;
		break;
	case KeyA:
		strafeLeft = true;
		break;
	case KeyD:
		strafeRight = true;
		break;
	default:
		break;
	};
}

void onKeyUp( KeyCode key )
{
	// std::stringstream str;
    // str << "key released "<< key << "\n";
	// log( Info, str.str().c_str());
	switch ( key )
	{
	case KeyW:
		moveForward = false;
		break;
	case KeyS:
		moveBackward = false;
		break;
	case KeyA:
		strafeLeft = false;
		break;
	case KeyD:
		strafeRight = false;
		break;
	default:
		break;
	};
}
} // end namespace

inline void Camera::moveCamera( vec3 const& direction, vec3 const& right, vec3 const& up )
{
	// Compute time difference between current and last frame
	t = System::time();
	deltaTime = t - lastTime;
	lastTime = t;
	// Movement - forward xor backward, left xor right.
	if ( moveForward != moveBackward )
	{
		float rev = moveBackward ? -1.0f : 1.0f;
		vec3 v = direction * ( deltaTime * speed * rev );
		position += v;
	}
	if ( strafeRight != strafeLeft )
	{
		float rev = strafeRight ? -1.0f : 1.0f;
		vec3 v = right * ( deltaTime * speed * rev );
		position += v;
	}
	if ( strafeUp || strafeDown )
	{
		float rev = strafeDown ? -1.0f : 1.0f;
		vec3 v = up * ( deltaTime * speed * rev );
		position += v;
		++scrollDelay;
	}
}

void Camera::update()
{
	// Compute new orientation
	if ( Mouse::the()->isLocked( 0 ) )
	{
		horizontalAngle += mouseSpeed * mouseDeltaX;
		verticalAngle += mouseSpeed * -mouseDeltaY;
	}
	// Direction: Spherical coordinates to Cartesian coordinates conversion
	vec3 direction = vec3( cos( verticalAngle ) * sin( horizontalAngle ), sin( verticalAngle ),
						   cos( verticalAngle ) * cos( horizontalAngle ) );
	// Right vector
	vec3 right = vec3( sin( horizontalAngle - ( pi / 2.0 ) ), 0, cos( horizontalAngle - ( pi / 2.0 ) ) );
	// Up vector
	vec3 up = right.cross( direction );
	moveCamera( direction, right, up );
	// Look vector
	vec3 look = position + direction;
	// Camera matrix
	view = mat4::lookAt( position, // Camera is here
						 look,	 // and looks here : at the same position, plus "direction"
						 up		   // Head is up (set to (0, -1, 0) to look upside-down)
	);
	// Update view-projection matrix
	mvp = projection * view;
	// var nm = mvp.inverse().transpose();
	Graphics4::setMatrix( mvpID, mvp );
	Graphics4::setMatrix( viewMatrixID, view );
	// reset wheel vars
	mouseDeltaX = 0;
	mouseDeltaY = 0;
	if ( scrollDelay == 10 )
	{
		strafeUp = false;
		strafeDown = false;
	}
}

Camera::Camera( Graphics4::PipelineState* pipeline, vec3 const& pos, vec2i const& dimensions, vec2 const& cameraAngles )
{
	width = dimensions.x();
	height = dimensions.y();
	position = pos;
	horizontalAngle = cameraAngles.x();
	verticalAngle = cameraAngles.y();
	// normalMatrixID = pipeline.getConstantLocation("normalMatrix");
	mvpID = pipeline->getConstantLocation( mvpName.c_str() );
	viewMatrixID = pipeline->getConstantLocation( viewMatrixName.c_str() );

	// ** Camera matrices **
	// Projection matrix: 45° Field of View, 4:3 ratio, display range : 0.1 unit <-> 100 units
	projection = mat4::Perspective( 45.0f, (float)width / (float)height, 0.1f, 100.0f );
	// Or, for an ortho camera
	// projection = FastMatrix4.orthogonalProjection(-10.0, 10.0, -10.0, 10.0, 0.0, 100.0); // In world coordinates
	view = mat4::lookAt( position,		  // Camera is at (4, 3, 3), in World Space
						 vec3( 0, 0, 0 ), // and looks at the origin
						 vec3( 0, 1, 0 )  // Head is up (set to (0, -1, 0) to look upside-down)
	);
	// ** Mouse and Keyboard Callbacks **
	Keyboard::the()->KeyDown = onKeyDown;
	Keyboard::the()->KeyUp = onKeyUp;
	Mouse::the()->Move = onMouseMove;
	Mouse::the()->Press = onMouseDown;
	Mouse::the()->Release = onMouseUp;
	Mouse::the()->Scroll = onMouseWheel;
}
