#include <iostream>
using namespace std;
#include <vector>

int main()
{

    // 1 way ,declare karine pachhi push method thi add karvanu,usually aaj use karvanu
    vector<int> v1;

    // 2 (sixe,element) badha ma aaj value store thase
    vector<float> v2(5, 10.1f);
    for (int i = 0; i < 5; i++)
    {
        cout << v2[i] << "\t";
    }
    cout << endl;

    // 3rd way.. aakyarey use nay thay , amuk var na bhi chale
    vector<int> v3{10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << v3[i] << "\t";
    }
    cout << endl;

    return 0;
}