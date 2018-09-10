#version 450

in vec3 pos;
in vec2 tex;
in vec3 nor;

// Output data: will be interpolated for each fragment
out vec2 vUV;
out vec3 vView;
out vec3 vNormal;
out vec3 vEyeDir;
out vec3 vLightDir;

// Values that stay constant for the whole mesh
uniform mat4 P;
uniform mat4 V;
uniform mat4 M;
const vec3 lightPos = vec3(2,5,10);

void main() {
	// Output position of the vertex, in clip space: MP * position
	gl_Position = P * M * vec4(pos, 1.0);
	// Position of the vertex, in world coordinates : M * position
	vView = (M * vec4(pos, 1.0)).xyz;
	// Vector that goes from the vertex to the camera, in camera space.
	// In camera space, the camera is at the origin (0,0,0).
	vec3 cameraSpace = (V * M * vec4(pos, 1.0)).xyz;
	vEyeDir = vec3(0.0, 0.0, 0.0) - cameraSpace;
	// Vector that goes from the vertex to the light,
	// in camera space. M is ommited because it's identity.
	vec3 lightPosCamSpace = (V * vec4(lightPos, 1.0)).xyz;
	vLightDir = lightPosCamSpace + vEyeDir;
	// Normal of the the vertex, in camera space - Only correct if modelMatrix
	// does not scale the model! Use its inverse transpose if not.
	vNormal = (V * M * vec4(nor, 0.0)).xyz;
	// UV of the vertex. No special space for this one.
	vUV = tex;
}