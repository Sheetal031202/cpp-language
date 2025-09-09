#include <iostream>
using namespace std;

main()
{

    int row, col;
    cout << "Enter row :";
    cin >> row;

    cout << "Enter column :";
    cin >> col;

    int a[row][col];
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << "Enter Element :";
            cin >> a[i][j];
            sum = sum + a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "sum is :" << sum << endl;

    float avg = (float)sum / (row * col);
    cout << "avg is :" << avg;
}