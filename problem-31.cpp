#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;
    char grade;

    Student(string name, int age, char grade)
    {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    void displayStdudent()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student student_1("Albert", 15, 'B');
    Student student_2("Betty", 18, 'D');
    Student student_3("Harry", 13, 'A');

    cout << "Student 1:\n";
    student_1.displayStdudent();
    cout << endl;

    cout << "Student 2:\n";
    student_2.displayStdudent();
    cout << endl;

    cout << "Student 3:\n";
    student_3.displayStdudent();
    cout << endl;

    return 0;
}