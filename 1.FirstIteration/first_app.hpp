#define once

#include "window.hpp"

namespace env { 
  class FirstApp {

    public:
      static constexpr int WIDTH = 800;
      static constexpr int HEIGHT = 600;

      void run();

    private:
      vulkanWindow VulkanWindow{WIDTH, HEIGHT, "Hello Vulkan !"};
  };
}
