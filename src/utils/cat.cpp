// Мой класс Cat
#include "cat.hpp"  // Подключаем свой заголовочный файл
#include <iostream>

int Cat::x = 0;

Cat::Cat(const std::string& name, int age) : name(name), age(age) {
    std::cout << "Создался котик под именем " << name << " и возрастом " << age << std::endl;
    x++;
}

Cat::~Cat() {
	std::cout << "Котик под именем " << name << " ушел 😢" << std::endl;
	x--;
}

void Cat::GetCat() {
	std::cout << "Котиков всего: " << x << std::endl;
}
void Cat::meow() const {
    std::cout << name << " Говорит: Мяу!" << "\n";
}
