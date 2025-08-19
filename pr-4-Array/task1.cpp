#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter Array size :";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> a[i];
    }

     for (int i = 0; i < size; i++)
    {

        if(a[i]<0)
        {
                    cout << a[i] << "\t" ;

        }
    }
}