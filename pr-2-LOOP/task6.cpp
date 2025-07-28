#include <iostream>
using namespace std;

main()
{
    int a, count = 0;
    cout << "Enter a number : ";
    cin >> a;

    for (int i = a; i != 0; i = i / 10)
    {
        i % 10;
        count++;
    }
    cout << "Number of digit is : " << count;
}