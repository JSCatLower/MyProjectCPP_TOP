#include <iostream>
#include <string>
#include "human.hpp"

My_human::My_human(int age, const std::string& name) : age(age), name(name) {}
void My_human::hello() const {
    std::cout << name << " say: Hello!" << std::endl;
}