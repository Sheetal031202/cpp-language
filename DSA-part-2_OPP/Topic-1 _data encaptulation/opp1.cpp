#include <iostream>
using namespace std;

// class always global area ma banavanu.
class Student
{
public:
    char name[20];
    int age;
    int phone;
    char course[20];
};

int main()
{

    Student stu;
    cout << "Enter Name:";
    cin >> stu.name;
    cout << "Enter Age:";
    cin >> stu.age;
    cout << "Enter PHONE:";
    cin >> stu.phone;
    cout << "Enter COURSE:";
    cin >> stu.course;

    cout << endl
         << "output" << endl
         << endl
         << "Enter Name:" << stu.name << endl;
         cout <<  "Enter Age:" << stu.age << endl;
         cout <<  "Enter phone:" << stu.phone << endl;
         cout <<  "Enter course:" << stu.course << endl;

    return 0;
}