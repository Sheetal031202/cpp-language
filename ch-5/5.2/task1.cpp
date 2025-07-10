#include <iostream>
using namespace std;
main()
{

    int a, b, c;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;

    if (a == b && b == c && a == c)
    {
        cout << endl
             << " All are equal...." << endl;
    }
    else if (a == b || b == c ||a == c)
    {
        cout << endl
             << " both are equal...." << endl;
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << endl
                     << a << " is big" << endl;
            }
            else
            {
                cout << endl
                     << c << " is big" << endl;
            }
        }
        else

        {

            if (b > c)
            {
                cout << endl
                     << b << " is big" << endl;
            }
            else
            {
                cout << endl
                     << c << " is big" << endl;
            }
        }
    }
}