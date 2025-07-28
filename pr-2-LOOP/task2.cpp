#include <iostream>
using namespace std;
main()
{
    int num, rem, length = 0, sum = 0;
    cout << "enter num : ";
    cin >> num;
    int a = num;
    for (int i = num; i != 0; i = i / 10)
    {
        length++;
    }

    for (int i = num; i != 0; i = i / 10)
    {
        rem = i % 10;
        int mul = 1;
        for (int j = length; j >= 1; j--)
        {
            mul = rem * mul;
        }
        sum = sum + mul;
        length--;
    }
    if (a == sum)
      cout << "it is disarium number";
    
    else
    
        cout << "it is not  disarium number";
    
}