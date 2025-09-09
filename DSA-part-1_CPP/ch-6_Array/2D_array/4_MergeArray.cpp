#include <iostream>
using namespace std;

main()
{

    // input row 1
    int row1, col1;
    cout << "Enter one row :";
    cin >> row1;

    cout << "Enter one column :";
    cin >> col1;

    // input row 2
    int row2, col2;
    cout << "Enter two row :";
    cin >> row2;

    cout << "Enter two column :";
    cin >> col2;

    // declare first array
    int a[row1][col1];

    // input first array
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {

            cout << "Enter Element one:";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // declare second array
    int b[row2][col2];

    // input second array
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {

            cout << "Enter Element two:";
            cin >> b[i][j];
        }
        cout << endl;
    }

    // print first array
    cout << "First array " << endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {

            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    // print second array
    cout << "second array " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {

            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
        cout << endl<<endl;

    // merge array
    int c[row1][col1 + col2];
    cout << "merge array " ;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {

            c[i][j] = a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1 + col2; j++)
        {

            c[i][j + col1] = b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}