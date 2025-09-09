#include <iostream>
using namespace std;

// merge two array
main()
{
    int row1;
    cout << "Enter row one:";
    cin >> row1;

    int row2;
    cout << "Enter row two:";
    cin >> row2;

    int a[row1];
    int b[row2];
    int c[row1 + row2]; 

    for (int i = 0; i < row1; i++)
    {
        cout << "a  value" << i + 1 << ": ";

        cin >> a[i];
    }

    for (int i = 0; i < row2; i++)
    {
        cout << "b  value " << i + 1 << ": ";

        cin >> b[i];
    }

    for (int i = 0; i < row1; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < row2; i++)
    {
        c[i + row1] = b[i];
    }

    for (int i = 0; i < row1 + row2; i++)
    {
        cout << c[i] << "\t";
    }
}