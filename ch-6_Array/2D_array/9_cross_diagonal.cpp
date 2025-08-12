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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << "Enter Element :";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i + j == row - 1 || a[i] == a[j])
            {
                cout << a[i][j] << "\t";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
 
    }
  
}