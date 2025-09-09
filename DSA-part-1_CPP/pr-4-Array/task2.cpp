#include <iostream>
using namespace std;

main()
{
    // row column input
    int row, col;
    cout << "Enter row size :";
    cin >> row;
    cout << "Enter column size :";
    cin >> col;

    // array input
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Element:";
            cin >> a[i][j];
        }
    }

    // largest element
    int big = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > big)
            {
                big = a[i][j];
            }
        }
    }

    cout << endl<<  "Largest Element is : "  << big;
}