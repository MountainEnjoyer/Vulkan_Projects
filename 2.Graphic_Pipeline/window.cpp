// for methods implementation

#include "window.hpp"

namespace env {
  // the constructor :
  vulkanWindow::vulkanWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
    initWindow();
  }

  vulkanWindow::~vulkanWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
  }

  void vulkanWindow::initWindow() {
    //init the GLFW lib
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
  }
}
