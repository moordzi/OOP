#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"

using namespace std;

// Vertailu nimen mukaan
bool compareByName(const Student& a, const Student& b)
{
    return a.getName() < b.getName();
}

// Vertailu iän mukaan
bool compareByAge(const Student& a, const Student& b)
{
    return a.getAge() < b.getAge();
}

int main()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch(selection)
        {
        case 0:
        {
            string name;
            int age;

            cout << "Student name ? ";
            cin >> name;

            cout << "Student age ? ";
            cin >> age;

            Student newStudent(name, age);
            studentList.push_back(newStudent);
            break;
        }

        case 1:
        {
            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 2:
        {
            sort(studentList.begin(), studentList.end(), compareByName);

            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 3:
        {
            sort(studentList.begin(), studentList.end(), compareByAge);

            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 4:
        {
            string searchName;
            cout << "Student to be found name = ? ";
            cin >> searchName;

            bool found = false;

            for (const Student& s : studentList)
            {
                if (s.getName() == searchName)
                {
                    cout << "Student found:" << endl;
                    s.printStudentInfo();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student not found." << endl;
            }

            break;
        }

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }

    } while(selection < 5);

    return 0;
}
