#include <iostream>
using namespace std;

main()
{

    //(x-y-z)²

    int x, y, z;
    cout << "Enter X value : ";
    cin >> x;

    cout << "Enter Y value : ";
    cin >> y;

    cout << "Enter Y value : ";
    cin >> z;

    cout << endl
         << "your ans is = " << (x * x) +(y * y ) +(z * z ) +(2 * x * y) +(2 * y * z) +(2 * x * z)  << endl;
}