#include <iostream>
using namespace std;
main()
{

    // find max between 2
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;
    if ((a > b) && (a > c))
    {
        cout << a << " is max" << endl;
    }
    else if ((b > a) && (b > c))
    {
        cout << b << " is max" << endl;
    }
    else
    {
        cout << c << " is max" << endl;
    }
}