/*
 * LveApp class
 *
 * Starting point for a little vulkan engine application
 *
 * Copyright (C) 2020 by Blurrypiano - https://github.com/blurrypiano/littleVulkanEngine
 *
 * This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
 */

#pragma once

#include "lve_window.hpp"

namespace lve {

class LveApp {
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

 private:
  LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};

 public:
  void run();
};

}  // namespace lve