#include <iostream>
using namespace std;

class A
{
private:
    int no;
    char name[20];
    int phone;

public:
    void setData()
    {
        cout << "Enter no : ";
        cin >> no;
        cout << "Enter name : ";
        cin >> name;  // works, but better to use string
        cout << "Enter phone : ";
        cin >> phone;
    }

    void getData()
    {
        cout << "No : " << no << endl;
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
    }
};

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    // Create array of objects
    A obj[size];

    cout << "\n--- Input Data ---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nRecord " << i + 1 << endl;
        obj[i].setData();
    }

    cout << "\n--- Output Data ---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nRecord " << i + 1 << endl;
        obj[i].getData();
    }

    return 0;
}
