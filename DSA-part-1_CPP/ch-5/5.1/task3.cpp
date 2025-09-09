#include <iostream>
using namespace std;
main()
{

    // find max between 2
    int a;
    cout << "Enter first number: ";
    cin >> a;
    
    if (a > 0)
    {
        cout << a << " is positive number" << endl;
    }
    else if(a<0)
    {
     cout << a << " is negative number" << endl;
    }
    else{
         cout << a << " is nutural" << endl;
    }
}