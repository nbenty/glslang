#version 310 es

precision mediump float;
precision highp usampler2D;
precision highp sampler2D;
precision highp isampler2DArray;

layout(origin_upper_left, pixel_center_integer) in vec4 gl_FragCoord;  // ERROR, not supported

layout(location = 2) in vec3 v3;
layout(location = 2) in mat4 yi;  // ERROR, locations conflict with xi

uniform sampler2D arrayedSampler[5];
uniform usampler2D usamp2d;
uniform usampler2DRect samp2dr;      // ERROR, reserved
uniform isampler2DArray isamp2DA;

in vec2 c2D;
uniform int i;

void main()
{
    vec4 v = texture(arrayedSampler[i], c2D);  // ERROR

    ivec2 offsets[4];
    const ivec2 constOffsets[4] = ivec2[4](ivec2(1,2), ivec2(3,4), ivec2(15,16), ivec2(-2,0));
    uvec4 uv4 = textureGatherOffsets(samp2dr, c2D, offsets, 2);  // ERROR, not supported
    vec4 v4 = textureGather(arrayedSampler[0], c2D);
    ivec4 iv4 = textureGatherOffset(isamp2DA, vec3(0.1), ivec2(1), 3);
    iv4 = textureGatherOffset(isamp2DA, vec3(0.1), ivec2(1), i);  // ERROR, last argument not const
    iv4 = textureGatherOffset(isamp2DA, vec3(0.1), ivec2(1), 4);  // ERROR, last argument out of range
    iv4 = textureGatherOffset(isamp2DA, vec3(0.1), ivec2(1), 1+2);
    iv4 = textureGatherOffset(isamp2DA, vec3(0.1), ivec2(i));
}

out vec4 outp;

void foo23()
{
    const ivec2[3] offsets = ivec2[3](ivec2(1,2), ivec2(3,4), ivec2(15,16));

    textureProjGradOffset(usamp2d, outp, vec2(0.0), vec2(0.0), ivec2(c2D));     // ERROR, offset not constant
    textureProjGradOffset(usamp2d, outp, vec2(0.0), vec2(0.0), offsets[1]);
    textureProjGradOffset(usamp2d, outp, vec2(0.0), vec2(0.0), offsets[2]);     // ERROR, offset out of range
    textureProjGradOffset(usamp2d, outp, vec2(0.0), vec2(0.0), ivec2(-10, 20)); // ERROR, offset out of range
}