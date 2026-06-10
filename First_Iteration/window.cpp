// for methods implementation

#include "window.hpp"

namespace env {
  // the constructor :
  envWindow::envWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
    initWindow();
  }

  envWindow::~envWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
  }

  void envWindow::initWindow() {
    //init the GLFW lib
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
  }
}
