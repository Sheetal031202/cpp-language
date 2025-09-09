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

    // input of row
    int rInput, cInput;
    cout << "Enter row for Sum :";
    cin >> rInput;

    cout << endl;
    int rSum = 0, cSum = 0;

    // row output
    for (int i = rInput; i < rInput + 1; i++)
    {
        cout << " Element of row  : ";

        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
            rSum = rSum + a[i][j];
        }
        cout << endl;
    }
    cout << " Sum of row is  : " << rSum << endl
         << endl;

    //  column input
    cout << "Enter column  for Sum :";
    cin >> cInput;

    for (int i = 0; i < row; i++)
    {
                    cout << " Element of column  : ";

        for (int j = cInput; j < cInput + 1; j++)
        {
            cout << a[i][j] << "\t";
            cSum = cSum + a[i][j];
        }
        cout << endl;
    }
    cout << endl<<  " Sum of column is  : " << cSum << endl
         << endl;
}