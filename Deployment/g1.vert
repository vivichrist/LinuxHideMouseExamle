#version 110
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

attribute vec3 pos;
varying vec2 texCoord;
attribute vec2 tex;

void main()
{
    gl_Position = vec4(pos.x, pos.y, 0.5, 1.0);
    texCoord = tex;
}

