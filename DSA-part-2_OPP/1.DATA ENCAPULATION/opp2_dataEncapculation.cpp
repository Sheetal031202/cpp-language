#include <iostream>
using namespace std;

class a
{

private:
    int no;
    char name[20];
    int phone;

public:
    void setData()
    {
        cout << "Enter no :";
        cin >> no;
        cout << "Enter name :";
        cin >> name;
        cout << "Enter no :";
        cin >> phone;
    }

    void getData()
    {
        cout << "No:" << no << endl;
        fflush(stdin);
        cout << "Name:" << name << endl;
        cout << "Phone:" << phone << endl;
    }
};


// usually aa main ne biji file par rakhvanu and attach kari devanu
int main()
{
    cout << "Output" << endl
         << endl;
    a data1;
    data1.setData();
    data1.getData();

    return 0;
}

