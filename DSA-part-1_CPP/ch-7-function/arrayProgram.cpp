#include <iostream>
#include "arrayFUnction.cpp"

using namespace std;

int main()
{

    int size;
    cout << "Enter array size:";
    size = input();

    int array[size];
    arrayinput(size, array);

    arrayoutput(size, array);
         cout <<endl 
         << " array sum:" << arraySum(size, array);
    return 0;
}