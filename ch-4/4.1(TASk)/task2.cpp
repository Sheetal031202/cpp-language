#include <iostream>
using namespace std;

main()

{
    // swaping without 3rd variable
    int x, y;

    cout << "Enter X value :";
    cin >> x;

    cout << "Enter y value :";
    cin >> y;

    cout << "Before swapping " << endl
         << "X\t:" << x << endl
         << "Y\t:" << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "After swapping " << endl
         << "X\t:" << x << endl
         << "Y\t:" << y << endl;
}