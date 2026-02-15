#include "Student.h"
#include <iostream>

Student::Student()
{
    name = "";
    age = 0;
}

Student::Student(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

std::string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo() const
{
    std::cout << "Student " << name << " Age " << age << std::endl;
}
