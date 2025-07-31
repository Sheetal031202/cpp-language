#include <iostream>
using namespace std;
main()
{
    int a=11;
    for (int i =1 ;i<=4; i++)
    {
        for (int j = 1;j<=i;j++)
        {
            cout << a << " ";
            a++;
          }
        cout << endl;
    }
}