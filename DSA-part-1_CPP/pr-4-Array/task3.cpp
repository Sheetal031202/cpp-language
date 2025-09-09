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

    // actual output
    cout << endl
         << "Actual Array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    // Transpose output
    cout << endl
         << "Transpose array:" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }
}