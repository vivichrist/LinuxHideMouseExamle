#version 110
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform mat4 P;
uniform mat4 M;
uniform mat4 V;

attribute vec3 pos;
varying vec3 vView;
varying vec3 vEyeDir;
varying vec3 vLightDir;
varying vec3 vNormal;
attribute vec3 nor;
varying vec2 vUV;
attribute vec2 tex;

void main()
{
    gl_Position = (P * M) * vec4(pos, 1.0);
    vView = (M * vec4(pos, 1.0)).xyz;
    vec3 cameraSpace = ((V * M) * vec4(pos, 1.0)).xyz;
    vEyeDir = vec3(0.0) - cameraSpace;
    vec3 lightPosCamSpace = (V * vec4(2.0, 5.0, 10.0, 1.0)).xyz;
    vLightDir = lightPosCamSpace + vEyeDir;
    vNormal = ((V * M) * vec4(nor, 0.0)).xyz;
    vUV = tex;
}

