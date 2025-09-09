#include <iostream>
using namespace std;
main()
{

    int a, b, c, d;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    cout << "Enter d:";
    cin >> d;

    if (a == b && b == c && a == c && a == d)
    {
        cout << endl
             << " All are equal...." << endl;
    }
    else if (a == b || b == c || a == c || a == d)
    {
        cout << endl
             << " numbers  are equal...." << endl;
    }
    else
    {

        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << endl
                         << a <<
                        " is big...." << endl;
                }
                else
                {
                    cout << endl
                         << d <<
                        " is big...." << endl;
                }
            }
            else
            {
                if (c > d)
                {
                    cout << endl
                         << c <<
                        " is big...." << endl;
                }
                else
                {
                    cout << endl
                         << d <<
                        " is big...." << endl;
                }
            }
        }
        else

        {
             if (b > c)
            {
                if (b > d)
                {
                    cout << endl
                         << b <<
                        " is big...." << endl;
                }
                else
                {
                    cout << endl
                         << d <<
                        " is big...." << endl;
                }
            }
            else
            {
                if (c > d)
                {
                    cout << endl
                         << c <<
                        " is big...." << endl;
                }
                else
                {
                    cout << endl
                         << d <<
                        " is big...." << endl;
                }
            }
        }
    }
}