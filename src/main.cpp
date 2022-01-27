#include <iostream>

#include <spdlog/spdlog.h>

#include "concepts.h"
#include "lambdas.h"

int main()
{
  //Use the default logger (stdout, multi-threaded, colored)
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");
  
  const auto average = RunAverage();
  fmt::print("Average is {}\n", average);

  DoLambdaStuff();

  return 0;
}
