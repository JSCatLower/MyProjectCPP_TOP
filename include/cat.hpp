// cat.hpp
#pragma once  // Защита от повторного включения
#include <string>

class Cat {
public:
    Cat(const std::string& name, int age);               // Конструктор
    void meow() const;   // Метод
private:
    std::string name; // Поле класса
    int age;
};
