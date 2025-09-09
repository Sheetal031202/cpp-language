#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter array element " << i << " :";
        cin >> a[i];
    }

    int sum;
    cout << "Enter SUm : ";
    cin >> sum;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if ((a[i] + a[j] == sum))
            {
                cout << " your number is " << a[i] << " and " << a[j] <<endl;
            }
        }
    }
}
