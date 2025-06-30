#include <iostream>
using namespace std;

main()
{

    // (x-y)³

    int x, y;
    cout << "Enter X value : ";
    cin >> x;

    cout << "Enter Y value : ";
    cin >> y;

    cout << endl
         << "your ans is = " << (x * x * x) - (y * y * y) - ((3 * x * y) * (x - y)) << endl;
}