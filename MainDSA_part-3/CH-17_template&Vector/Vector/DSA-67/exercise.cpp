// 2d metrix
#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;

    // 1 d
    vector<int> v1(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element : ";
        cin >> v1[i];
    }

    // actual
    cout << "Actual" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v1[i] << "\t";
    }

    // small
    cout << "small : ";
    for (int i = 1; i < size - 1; i++)
    {
        if (v1[i] < v1[i - 1] && v1[i] < v1[i + 1])
        {
            cout << v1[i] << "\t";
        }
    }

    // large
    cout <<endl<<  "large : ";
    for (int i = 1; i < size - 1; i++)
    {
 if (v1[i] >v1[i - 1] && v1[i] > v1[i + 1])
        {
            cout << v1[i] << "\t";
        }    }

    return 0;
}