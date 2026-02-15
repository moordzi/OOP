#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string name;
    int age;

public:
    Student();
    Student(std::string name, int age);

    std::string getName() const;
    int getAge() const;

    void printStudentInfo() const;
};

#endif
