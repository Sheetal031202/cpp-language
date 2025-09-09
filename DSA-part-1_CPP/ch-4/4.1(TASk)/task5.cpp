#include <iostream>
using namespace std;

main()
{

    // (x+y)³
    
    int x, y;
    cout << "Enter X value : ";
    cin >> x;

    cout << "Enter Y value : ";
    cin >> y;

    cout << endl
         << "your ans is = " << (x * x * x) + (3 * (x * x) * y) + (3 * (y * y) * x) + (y * y * y) << endl;
}