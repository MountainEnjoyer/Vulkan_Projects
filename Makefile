# using modern C++ (-std=c++17)
# we set the optimization level to 02.
# 	removing it would make it faster but unsafe for production.
CFLAGS = -std=c++17 -O2

# -lglfw is for GLFW, -lvulkan links with the vulkan function loader
# the rest is threading and window managment
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: main.cpp 
	g++ $(CFLAGS) -o VulkanTest main.cpp $(LDFLAGS)

.PHONY: test clean

test : VulkanTest
	./VulkanTest

clean:
	rm -rf VulkanTest
