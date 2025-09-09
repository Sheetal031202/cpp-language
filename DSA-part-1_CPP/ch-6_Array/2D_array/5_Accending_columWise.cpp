#include <iostream>
using namespace std;

main()
{

    // colum wise accending

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

    cout << "Actual array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << a[i][j] << "\t";
        }
    }
    cout << endl;
    cout << endl;
    // accending logic
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = j + 1; k < col; k++)
            {

              if(a[i][j]>a[i][k]){
                  int swap = a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=swap;
              }
            }
        }
    }
    // acceng print
        cout <<  endl<<endl;

        cout << "Actual array" << endl;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << a[i][j] << "\t";
        }
                cout <<  endl;

    }
}


