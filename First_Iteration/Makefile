# using modern C++ (-std=c++17)
# we set the optimization level to 02.
# 	removing it would make it faster but unsafe for production.
CFLAGS = -std=c++17 -O2

# -lglfw is for GLFW, -lvulkan links with the vulkan function loader
# the rest is threading and window managment
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: *.cpp *.hpp 
	g++ $(CFLAGS) -o a.out *.cpp $(LDFLAGS)

.phony: test clean

test : a.out
	./a.out

clean:
	rm -rf a.out

