#include <iostream>
using namespace std;

main()

{
    // swaping with 3rd variable
    int x, y, z;

    cout << "Enter X value :";
    cin >> x;

    cout << "Enter y value :";
    cin >> y;

    cout << "Before swapping " << endl
         << "X\t:" << x << endl
         << "Y\t:" << y << endl;

    z = x;
    x = y;
    y = z;

    cout << "After swapping " << endl
         << "X\t:" << x << endl
         << "Y\t:" << y << endl;
}