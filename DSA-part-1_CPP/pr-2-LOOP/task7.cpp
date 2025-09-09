#include <iostream>
using namespace std;

main()
{
    int a, first;
    cout << "Enter a number : ";
    cin >> a;

    int last = a % 10;

    for (int i = a; i != 0; i = i / 10)
    {
        i % 10;
        if (i <= 9)
            first = i;
    }
    cout << "Your number : " << a << endl;
    cout << "First digit : " << first << endl;
    cout << "Last digit : " << last << endl;
    cout << "sum of first and last  digit is : " << first + last;
}