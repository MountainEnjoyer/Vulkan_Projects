#include "fist_app.hpp"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main () {
  env::FirstApp app{};

  try {
    app.run();
  } catch (const std::exception &e) {
    stf::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
