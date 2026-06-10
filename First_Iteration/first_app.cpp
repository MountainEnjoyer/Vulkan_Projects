#include "first_app.hpp"

namespace env {
  void FirstApp::run() {
    while (!VulkanWindow.shouldClose()) {
      glfwPollEvents();
    }
  }
}
