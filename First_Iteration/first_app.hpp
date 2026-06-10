#define once

#include "window.hpp"

namespace env { 
  class FirstApp {

    public:
      static constexpr int WIDTH = 800;
      static constexpr int HEIGHT = 600;

      void run() {};

    private:
      envWindow envWindow{WIDTH, HEIGHT, "Hello Vulkan !"};
  }
}
