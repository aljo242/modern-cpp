#include <functional>
#include <iostream>

#include <spdlog/spdlog.h>

#include "concepts.h"

int main()
{
  //Use the default logger (stdout, multi-threaded, colored)
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");
  
  std::vector ints {1, 2, 3, 4, 5, 6, 7, 8};
  fmt::print("Average is {}\n", Average(ints));

  return 0;
}
