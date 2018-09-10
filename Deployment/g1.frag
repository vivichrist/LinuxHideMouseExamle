#version 110
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform sampler2D tex;

varying vec2 texCoord;

void main()
{
    gl_FragData[0] = texture2D(tex, texCoord);
}

