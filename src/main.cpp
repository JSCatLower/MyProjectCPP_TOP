#include <iostream>
#include "math.hpp"
#include "cat.hpp"
#include <print>

int main() {
  std::cout << "Привет из C++!" << std::endl;
  std::cout << "Кстати, 2 + 3 = " << add(2, 3) << std::endl;
  std::cout << "10 / 3 = " << divide(10, 3) << std::endl;
  std::print("Раз раз..😌🐱\n");
  Cat sigma("sigma😎");
  sigma.meow();
}
