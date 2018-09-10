#version 110
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform sampler2D tex;

varying vec2 vUV;
varying vec3 vView;
varying vec3 vNormal;
varying vec3 vLightDir;
varying vec3 vEyeDir;

void main()
{
    vec3 lightColor = vec3(1.0);
    float lightPower = 150.0;
    vec3 materialDiffuseColor = texture2D(tex, vUV).xyz;
    vec3 materialAmbientColor = vec3(0.100000001490116119384765625) * materialDiffuseColor;
    vec3 materialSpecularColor = vec3(0.300000011920928955078125);
    float _distance = length(vec3(2.0, 5.0, 10.0) - vView);
    vec3 n = normalize(vNormal);
    vec3 l = normalize(vLightDir);
    float cosTheta = clamp(dot(n, l), 0.0, 1.0);
    vec3 E = normalize(vEyeDir);
    vec3 R = (-l) - (n * (2.0 * dot(n, -l)));
    float cosAlpha = clamp(dot(E, R), 0.0, 1.0);
    gl_FragData[0] = vec4(vec3((materialAmbientColor + ((((materialDiffuseColor * lightColor) * lightPower) * cosTheta) / vec3(_distance * _distance))) + ((((materialSpecularColor * lightColor) * lightPower) * pow(cosAlpha, 5.0)) / vec3(_distance * _distance))), 1.0);
}

