// 2d metrix
#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int col, row;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter col : ";
    cin >> col;

    // 1 d
    vector<int> v1(col);
    // 2 d
    vector<vector<int>> metrix(row, v1);

    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
        {
            cout << "Enter element ["<< i<< "]" << "["<< j<< "] :" ;
            cin >> metrix[i][j];
        }
        cout<< endl;
    }

        for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
        {
            cout <<  metrix[i][j] << "\t";
        }
        cout<< endl;
    }

    return 0;
}