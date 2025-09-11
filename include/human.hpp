#pragma once
#include <string>

class My_human {
private:
    const std::string name;
    int age;
public:
    My_human(int age, const std::string& name);
    void hello() const;
};