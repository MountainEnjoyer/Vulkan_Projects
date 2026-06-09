# Introduction
Vulkan is a platform agnostic API and does not include tools to create a window and display the rendered objects.
For that we'll use GLFW library wich supports Windows, Linux and MacOS.
Vulkan does not include a library for linear algebra operations. GLM is designed to be used with graphics APIs and is commonly used by OPENGL.

## Installation

Run ```sudo pacman -S vulkan-devel``` to install the vulkan dev-tools and ```vkcube``` to verify the installation. should render a cube.

Then run ```sudo pacman -S glfw``` to install GLFW.

Run ```sudo pacman -S glm``` to install GLM.


