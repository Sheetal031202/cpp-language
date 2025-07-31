
#include <iostream>
using namespace std;
main()

{
    char a;

    // upper
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                a = +j + 64;
                cout << a;
            }
            else
            {
                cout << j;
            }
        }

        for (int s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (i % 2 == 0)
            {
                a = +j + 64;
                cout << a;
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
// lower
     for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                a = +j + 64;
                cout << a;
            }
            else
            {
                cout << j;
            }
        }

        for (int s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (i % 2 != 0)
            {
                a = +j + 64;
                cout << a;
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
}
