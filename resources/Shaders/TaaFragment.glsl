#version 300 es
precision highp float;

layout (location = 0) out vec4 FragColor;

in vec2 texCoord;

uniform sampler2D scene;
uniform sampler2D prevScene;
uniform sampler2D velocity;

vec3 RGBToYCoCg(vec3 rgb) {
    float y = dot(vec3(0.25, 0.5, 0.25), rgb);
    float co = dot(vec3(0.5, 0, -0.5), rgb);
    float cg = dot(vec3(-0.25, 0.5, -0.25), rgb);
    return vec3(y, co, cg);
}

vec3 YCoCgToRGB(vec3 yCoCg) {
    float r = dot(vec3(1, 1,-1), yCoCg);
    float g = dot(vec3(1, 0, 1), yCoCg);
    float b = dot(vec3(1,-1,-1), yCoCg);
    return vec3(r, g, b);
}

vec3 CatmullRom5Tap(vec2 uv, vec4 scaling, sampler2D Color) {
    vec2 samplePos = uv * scaling.xy;
    vec2 tc1 = floor(samplePos - 0.5) + 0.5;
    vec2 f = samplePos - tc1;
    vec2 f2 = f * f;
    vec2 f3 = f * f2;

    vec2 w0 = f2 - 0.5 * (f3 + f);
    vec2 w1 = 1.5 * f3 - 2.5 * f2 + 1;
    vec2 w3 = 0.5 * (f3 - f2);
    vec2 w2 = 1 - w0 - w1 - w3;

    vec2 w12 = w1 + w2;

    vec2 tc0  = (tc1 - 1) * scaling.zw;
    vec2 tc12 = (tc1 + w2 / w12) * scaling.zw;
    vec2 tc3  = (tc1 + 2) * scaling.zw;

    vec4 result = vec4(0);
    result += vec4(texture(Color, vec2(tc0.x,  tc12.y)).rgb, 1) * (w0.x  * w12.y);
    result += vec4(texture(Color, vec2(tc12.x, tc0.y )).rgb, 1) * (w12.x * w0.y );
    result += vec4(texture(Color, vec2(tc12.x, tc12.y)).rgb, 1) * (w12.x * w12.y);
    result += vec4(texture(Color, vec2(tc12.x, tc3.y )).rgb, 1) * (w12.x * w3.y );
    result += vec4(texture(Color, vec2(tc3.x,  tc12.y)).rgb, 1) * (w3.x  * w12.y);

    return result.rgb / result.a;
}

void main() {
    vec3 currentColor = RGBToYCoCg(texture(scene, texCoord).rgb);
    vec3 prevColor = RGBToYCoCg(CatmulRom5Tap(texCoord, 1.0, prevScene));

    FragColor = mix(currentColor, prevColor, 0.5);
}
