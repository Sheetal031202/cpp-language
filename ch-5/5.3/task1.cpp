#include <iostream>
using namespace std;

main()
{

    int a, b, c;

    cout << "Enter first number : " ;
    cin >> a;
    cout << "Enter Second number : " ;
    cin >> b;
    cout << "Enter Third number : " ;
    cin >> c;

    (a > b)
        ? (a > c)
              ? cout << a << " is big " << endl
              : cout << c << " is big " << endl

    : (b > c)
        ? cout << b << " is big " << endl
        : cout << c << " is big " << endl;
}