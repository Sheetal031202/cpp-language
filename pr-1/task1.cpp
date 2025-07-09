#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    if (n == 0)
    {
        cout << endl
             << "Number is zero..";
    }
    else if (n > 0)
    {
        cout << endl
             << "Number is positive...";
    }
    else
    {
        cout << endl
             << "Number is negative...";
    }
}