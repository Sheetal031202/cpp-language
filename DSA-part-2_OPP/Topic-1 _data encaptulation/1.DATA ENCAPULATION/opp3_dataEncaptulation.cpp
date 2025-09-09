// #include <iostream>
// #include <string.h>
// using namespace std;

// // this key word;agar hu set ma parameter a.b,c evu lakhu to to chalsebut agar classna attribute chhe age,name,course
// // ,std eva same parameter lav tocompiler confuse thay and aapde same parameter na lakhiye to a
// // apde confuse thayi so je class na atribute hoy eni aagal this lagavi devanu usally this. aave but cpp ma this->(of  ->)aavse

// class Student
// {
// public:
//     int age;
//     char name[20];
//     string course;
//     int std;

// public:

//     void setdata(int a, char b[], string c, int d)
//     {
//         age = a;
//         // aaya hu upar age ne jevi rite assign karyu evi rite char ma na kari saku char ni bdle string lidhu hot to chale..so aama strcpy na function no use thase
//         strcpy(name, b);
//         course = c;
//         std = d;
//     }


      
//     void getdata()
//     {
//         cout << endl
//              << "Age\t :" << age << endl;
//         cout << "Name\t :" << name << endl;
//         cout << "Course\t :" << course << endl;
//         cout << "Std\t :" << std << endl;
//     }
// };

// int main()
// {

//     Student stu1;
//     stu1.setdata(101,"sheetal","full",5);
//     stu1.getdata();

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------------------------------
// second
// 2...................................................................
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
public:
    int age;
    char name[20];
    string course;
    int std;

public:


// aaya left side vala class na attribute chhe ,upar ni jem so eni aagal this lagavu padse
 void setdata(int age, char name[], string course, int std)
    {
        this->age = age;
        strcpy(this->name, name);
       this-> course = course;
       this-> std = std;
    }

// aaya thi lakhu kena lakhu kai fark na pade 
    void getdata()
    {
        cout << endl
             << "Age\t :" << this->age << endl;
        cout << "Name\t :" << name << endl;
        cout << "Course\t :" << course << endl;
        cout << "Std\t :" << std << endl;
    }
};

int main()
{

    Student stu1;
    stu1.setdata(101,"sheetal","full",5);
    stu1.getdata();

    return 0;
}