// Мой класс Cat
#include "cat.hpp"  // Подключаем свой заголовочный файл
#include <iostream>

Cat::Cat(const std::string& name) : name(name) {
    std::cout << "Создался котик под именем " << name << std::endl;
}

void Cat::meow() const {
    std::cout << name << " Говорит: Мяу!" << "\n";
}
