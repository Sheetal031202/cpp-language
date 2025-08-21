#include <iostream>
using namespace std;

// cube function
int cube(int *a)
{
    return *a * *a * *a;
}

int main()
{
    int row, col;

    //  row input
    cout << "Enter row:";
    cin >> row;
    cout << endl;

    //  column input
    cout << "Enter column:";
    cin >> col;
    cout << endl;

    // array input
    int a[row][col];
    int q=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element " <<q <<" : "  ;
            cin >> a[i][j];
            q++;
        }
    }

    // actual 2d array
    cout << endl <<"Real Array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl <<"Array of cube" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << cube(&a[i][j]) << "\t";
        }
        cout << endl;
    }

    return 0;
}