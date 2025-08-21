#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char name[30];
    cout << "Enter nmae:";
    cin >> name;

    int len = strlen(name);
    int *ptr;

    ptr = &len;
    cout << "Length is : " << *ptr;

    return 0;
}