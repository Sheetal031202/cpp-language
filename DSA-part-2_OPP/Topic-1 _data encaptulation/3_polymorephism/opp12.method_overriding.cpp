#include <iostream>
using namespace std;

class Math
{    
    public:
    void mul(int a, int b)
    {
        cout << "MATH : " << a * b;
    }
};

class std9 : public Math
{
    public:
    void mul(int a, int b)
    {
        Math::mul(a,b);
                cout << "CHILD : " << a * b;
    }
};

int main()
{

    std9 s1;
    s1.mul(2,3);
        return 0;

}