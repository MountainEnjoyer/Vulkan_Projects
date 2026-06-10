#define once

// telling GLFW to include vulkan's header
#define GLFW_INCLUDE_VULKAN
// include GLFW
#include <GLFW/glfw3.h>

//to use the standarts string
#include <string>

namespace env {
  class vulkanWindow {
    public:
      // to display the window
      envWindow(int w, int h, std::string name);
      // to remove the window
      ~envWindow();
    private:
      // func to init the window
      void initWindow();

      // window's variable
      const int width;
      const int height;

      // window's name
      std::string windowName;
      GLFW *window;
  };
}
