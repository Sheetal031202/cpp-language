#include <iostream>
using namespace std;
main()
{
    int marks;
    char grade;
    cout << "Enter a marks:";
    cin >> marks;

    (marks >= 91 && marks <= 100)  ? grade = 'A'
    : (marks >= 81 && marks <= 90) ? grade = 'B'
    : (marks >= 71 && marks <= 80) ? grade = 'C'
    : (marks >= 61 && marks <= 70) ? grade = 'D'
    : (marks >= 51 && marks <= 60) ? grade = 'E'
                                   : (grade = 'F');














                                   
    // switch
    switch (grade)
    {
    case 'A':
        cout << "congratualation your grade is = A" << endl;
        break;
    case 'B':
        cout << " your grade is = B" << endl;
        break;
    case 'C':
        cout << " your grade is = C" << endl;
        break;
    case 'D':
        cout << " your grade is = D" << endl;
        break;
    case 'E':
        cout << " your grade is = E" << endl;
        break;
    case 'F':
        cout << " your grade is = F" << endl;
        break;
    default:
        cout << "you are fail" << endl;
    }

    // conditon
    if (grade == 'F')
        cout << "better luck next time......you are  not eligible for the next level" << endl;
    else
        cout << "Welldone.......you are eligible for the next level" << endl;
}