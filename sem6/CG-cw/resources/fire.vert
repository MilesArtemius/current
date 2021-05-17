attribute vec3 coord;
attribute vec3 color;
varying vec3 vColor;

void main(void) {
    gl_Position = vec4(coord.x, coord.y, coord.z, 1);
    vColor = color;
}
