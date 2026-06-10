#version 450

// layout qualifier -> takes a location value
// depending on the grapgic pipeline the fragment shader can output to multiple location
// we specify it will be used as an output 
// and we declare its type and name
layout (location = 0) out vec4 outColor;

void main() {
  // rgba value
  outColor = vec4(1.0, 0.0, 0.0, 1.0);
  
}
