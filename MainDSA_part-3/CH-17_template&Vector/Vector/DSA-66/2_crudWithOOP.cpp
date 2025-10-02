#include <iostream>
using namespace std;
#include <vector>

// class
class Collection
{
public:
    vector<int> v;

public:
    void add(int a)
    {
        v.push_back(a);
    }

    void view()
    {
        if (v.empty())
        {
            cout << "Please Enter Elements first, then you can go next....";
        }
        else
        {
            for (int e : v)
            {
                cout << e << " ";
            }
        }
    }

    void insert(int a, int b)
    {
        if (a >= 0 && a <= v.size())
        {
        v.insert(v.begin() + a, b);

        }
        else{
            cout <<"Enter valid position";
        }
    }

    void remove(int a)
    {
        if (a >= 0 && a <= v.size())
        {
        v.erase(v.begin() + a);
        }
        else{
            cout <<"Enter valid position";
        }
    }
    void instruction()
    {
        cout << "O = Exit" << endl;
        cout << "1 = To add element" << endl;
        cout << "2 = To View element" << endl;
        cout << "3 = To insert element" << endl;
        cout << "4 = To delete" << endl;
    }
};
// ----------------------------------------------------------------------main
int main()
{

    Collection c1;

    int choice, index, element;


    return 0;
}