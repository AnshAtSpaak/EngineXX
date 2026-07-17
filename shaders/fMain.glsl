#version 460 core

out vec4 FragColor;

in vec3 ourColor;
in vec2 texCoord;

uniform sampler2D texture01;
uniform sampler2D texture02;
uniform float mixFactor;

void main()
{
  FragColor = mix(texture(texture01, texCoord), texture(texture02, vec2(texCoord.x, texCoord.y)), mixFactor);
}