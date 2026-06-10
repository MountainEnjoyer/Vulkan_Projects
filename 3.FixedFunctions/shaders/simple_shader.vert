// glsl verison :
#version 450

//Built in lang : vec2 contain 2 float 
vec2 postions[3] = vec2[] (
  // the postions of our vertices (the 3 points of the triangle)
  vec2(0.0,-0.5),
  vec2(0.5, 0.5),
  vec2(-0.5, 0.5)
); // hardcoded for now

//glsl use a different postion system:
//top left = (-1, -1)
//bottom right = (1, 1)
//so the center is (0, 0)
void main() {
  gl_Position = vec4(postions[gl_VertexIndex], 0.0, 1.0);
}
