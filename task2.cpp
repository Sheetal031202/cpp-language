#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    if (n % 2 == 0 && n % 5 == 0)
    {
        cout << endl
             << n << " is even and divide by 5..";
    }
    else if (n % 2 != 0 && n % 5 == 0)
    {
        cout << endl
             << n << " is odd and divide by 5..";
    }
    else
    {
        cout << endl
             << n << " is odd ..";
    }
}