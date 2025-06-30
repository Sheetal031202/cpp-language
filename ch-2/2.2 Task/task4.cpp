#include <iostream>
using namespace std;
#define R 7
main()
{
    // Simple interest

    int p;
    float n;
    cout << "Enter amount :";
    cin >> p;
    cout << "Enter time:";
    cin >> n;
    cout << "Simple interst is =" << (p * R * n )/ 100;
}