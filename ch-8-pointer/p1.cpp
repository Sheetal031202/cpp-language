#include <iostream>
using namespace std;

int main()
{

    int a = 25;
    int *ptr;
    ptr = &a;

    cout << "value print  : " << a << endl;
    cout << "value with pointer print : " << *ptr << endl;
    cout << "Address print : " << &a << endl;
    cout << "Adress with pointer print : " << ptr << endl;

    return 0;
}