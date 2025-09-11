#include <iostream>
#include "my_math.hpp"
#include "human.hpp"
int main() {
    double result{10 / 3};
    std::cout << "Hello, world!\n";
    std::cout << "10 / 3 = " << result << std::endl;
    std::cout << "1 + 1 = " << my_plus(1, 1) << std::endl;
    My_human Bob(20, "Bob");
    Bob.hello();
}