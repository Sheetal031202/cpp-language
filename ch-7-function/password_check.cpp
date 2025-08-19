#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    // password input
    char psw[20];
    cout << "ENter password :";
    cin >> psw;
    // cout << endl
    //      << "PASSWORD: " << psw;

    // string length
    int len = strlen(psw);
    // cout << endl
    //      << "Password length: " << len << endl
    //      << endl;

    // length more than 6
    int upr = 0, lwr = 0, digit = 0, symbol = 0;

    if (len >= 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (psw[i] >= 65 && psw[i] <= 90)
            {
                upr++;
            }
            else if (psw[i] >= 97 && psw[i] <= 122)
            {
                lwr++;
            }
            else if (psw[i] >= 48 && psw[i] <= 57)
            {
                digit++;
            }
            else
            {
                symbol++;
            }
        }
        //

        if (upr >= 1 && lwr >= 1 && digit >= 1 && symbol >= 1)
        {
            cout << endl
                 << "Password is strong ";
        }
        else
        {
            cout << endl
                 << "Password not strong ";
        }
    }
    else
    {
        cout << endl
             << "Password not strong ";
    }

    return 0;
}