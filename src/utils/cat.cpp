// Мой класс Cat
#include "cat.hpp"  // Подключаем свой заголовочный файл
#include <iostream>

Cat::Cat(const std::string& name, int age) : name(name), age(age) {
    std::cout << "Создался котик под именем " << name << "и возрастом " << age << std::endl;
}

void Cat::meow() const {
    std::cout << name << " Говорит: Мяу!" << "\n";
}
