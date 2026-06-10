#define once

#include "env_device.hpp"
#include <string>
#include <vector>

namespace env {

  struct PipelineConfigInfo {
    
  };

  class pipeline{
    public:
      pipeline(EnvDevice &device,const std::string& vertFilepath, const std::string& fragFilepath, const PipelineConfigInfo& configInfo);
      
      ~pipeline() {}

      pipeline(const pipeline&) = delete;
      void operator = (const pipeline&) = delete;

      static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);

    private:
      static std::vector<char> readFile(const std::string& filepath);

      void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath, const PipelineConfigInfo& configInfo);
      
      void createShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule);

      EnvDevice &envDevice;
      VkPipeline graphicsPipeline;
      VkShaderModule vertShaderModule;
      VkShaderModule fragShaderModule;
  };
}
