// cat.hpp
#pragma once  // Защита от повторного включения
#include <string>

class Cat {
public:
    Cat(const std::string& name, int age);
    ~Cat(); // Деструктор и конструктор
    void meow() const;
    static void GetCat();// Метод
private:
    std::string name; // Поле класса
    int age;
    static int x;
};
