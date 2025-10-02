#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int size;

    cout << "Enter size : ";
    cin >> size;
    int n = size - 1;

    vector<int> v(size);
    // 
    vector<int> v1(size);

    // taking input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> v[i];
    }

    // to  print  original data
    cout << endl
         << "Actual Data" << endl;
    for (int element : v)
    {
        cout << "  " << element;
    }
    // ---------------------------------------------------------------------------------------------------------------
    // 1......with using  second vector;
    // for (int i = 0; i < size; i++)
    // {
    //     v1[i] = v[n];
    //     --n;
    // }
    // cout << endl
    //      << "reverse Data" << endl;
    // for (int element : v1)
    // {
    //     cout << "  " << element;
    // }
    // ----------------------------------------------------------------------------------------------------------------------
   
   
    // 2...without using second vector
    for (int i = 0; i < size/2; i++)
    {
        int a=v[i];
        v[i]=v[n-i];
        v[n-i]=a;

    }  

    cout << endl
         << "reverse Data" << endl;
    for (int element : v)
    {
        cout << "  " << element;
    }

    
    return 0;
}