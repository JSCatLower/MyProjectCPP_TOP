// Мой класс Cat
#include "../../include/cat.hpp"  // Подключаем свой заголовочный файл
#include <iostream>

Cat::Cat(const std::string& name) : name(name) {}

void Cat::meow() const {
    std::cout << name << " Говорит: Мяу!" << "\n";
}
