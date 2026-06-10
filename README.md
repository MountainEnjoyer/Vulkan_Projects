# Introduction
Vulkan is a platform agnostic API and does not include tools to create a window and display the rendered objects.
For that we'll use GLFW library wich supports Windows, Linux and MacOS.
Vulkan does not include a library for linear algebra operations. GLM is designed to be used with graphics APIs and is commonly used by OPENGL.
We just need a program to compile shaders from human-readable GLSL to bytecode.
You can read more [here](https://vulkan-tutorial.com/Development_environment#page_Vulkan-Packages).

## Installation on Arch Linux

- Run ```sudo pacman -S vulkan-devel``` to install the vulkan dev-tools and ```vkcube``` to verify the installation. should render a cube.
- Then run ```sudo pacman -S glfw``` to install GLFW.
- Run ```sudo pacman -S glm``` to install GLM.
- Run ```sudo pacman -S sharderc``` and ```glslc``` for it to give you an error. :)
- Run ```sudo pacman -S libxi libxxf86vm``` if its not installed on your machine.
Congrats everything has been downloaded.

## Setting Up
Create a Makefile to compile the code. Everything has been commented to understand what each line mean.
Type ```make test``` to compile and run the output file.
I should create a new empty window (doesn't show if you're using wayland since it's empty).

