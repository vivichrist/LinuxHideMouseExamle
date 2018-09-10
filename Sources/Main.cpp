#include "pch.h"

#include "MeshObject.hpp"
#include "Camera.hpp"
#include <Kore/Graphics1/Color.h>
#include <Kore/Graphics1/Image.h>
#include <Kore/Graphics4/Graphics.h>
#include <Kore/Graphics4/PipelineState.h>
#include <Kore/IO/FileReader.h>
#include <Kore/Log.h>
#include <Kore/Math/Vector.h>
#include <Kore/System.h>
#include <vector>
#include <sstream>

/* Demo of how to use log function
if (debug) {
			log(Info, "Pos %f %f %f", position.x(), position.y(), position.z());
			log(Info, "Player Pos %f %f %f", playerPosition.x(), playerPosition.y(), playerPosition.z());
} */

using namespace Kore;

namespace
{
const int width = 1024;
const int height = 768;

double startTime;
Graphics4::Shader* vertexShader;
Graphics4::Shader* fragmentShader;
Graphics4::PipelineState* pipeline;
Camera* camera;

// null terminated array of MeshObject pointers
std::vector<MeshObject> objects;
MeshObject* tiger;

bool sit = false;

// uniform locations - add more as you see fit
Graphics4::TextureUnit tex;
Graphics4::ConstantLocation mLocation;

vec3 playerPosition;
int background = 0x111122;

bool debug = false;

void update()
{
	Graphics4::begin();

		Graphics4::clear( Graphics4::ClearColorFlag | Graphics4::ClearDepthFlag, background, 1.0f );
		Graphics4::setPipeline( pipeline );

		camera->update();
		// Render world
		for ( MeshObject& obj : objects )
		{
			Graphics4::setMatrix( mLocation, obj.M );
			obj.render( tex );
		}
		Graphics4::setMatrix(mLocation, tiger->M);
		tiger->render(tex);

	Graphics4::end();
	Graphics4::swapBuffers();
}

void init()
{
	FileReader vs( "shader.vert" );
	FileReader fs( "shader.frag" );
	vertexShader = new Graphics4::Shader( vs.readAll(), vs.size(), Graphics4::VertexShader );
	fragmentShader = new Graphics4::Shader( fs.readAll(), fs.size(), Graphics4::FragmentShader );

	// This defines the structure of your Vertex Buffer
	Graphics4::VertexStructure structure;
	structure.add( "pos", Graphics4::Float3VertexData );
	structure.add( "tex", Graphics4::Float2VertexData );
	structure.add( "nor", Graphics4::Float3VertexData );

	pipeline = new Graphics4::PipelineState;
	pipeline->inputLayout[0] = &structure;
	pipeline->inputLayout[1] = nullptr;
	pipeline->vertexShader = vertexShader;
	pipeline->fragmentShader = fragmentShader;
	pipeline->depthMode = Graphics4::ZCompareLess;
	pipeline->depthWrite = true;
	pipeline->compile();

	camera = new Camera( pipeline, vec3( 0.0f, 0.0f, 30.0f ), vec2i( width, height ), vec2( pi, 0.0f ) );

	tex = pipeline->getTextureUnit( "tex" );
	mLocation = pipeline->getConstantLocation( "M" );

	objects.push_back( MeshObject( "earth.obj", "earth.png", structure, 1.0f ) );
	objects.back().M = mat4::Translation( 10.0f, 0.0f, 0.0f );
	objects.push_back( MeshObject( "earth.obj", "earth.png", structure, 3.0f ) );
	objects.back().M = mat4::Translation( -10.0f, 0.0f, 0.0f );
	tiger = new MeshObject( "tiger.obj", "tigeratlas.jpg", structure, 1.0);
	tiger->M = mat4::Translation( 0.0, 0.0, -5.0 );

	Graphics4::setTextureAddressing( tex, Graphics4::U, Graphics4::Repeat );
	Graphics4::setTextureAddressing( tex, Graphics4::V, Graphics4::Repeat );
}

} // end namespace

int kore( int argc, char** argv )
{
	Kore::System::init( "Some Sort of VR Experience", width, height );
	init();

	Kore::System::setCallback( update );

	startTime = System::time();
	Kore::System::start();
	return 0;
}
