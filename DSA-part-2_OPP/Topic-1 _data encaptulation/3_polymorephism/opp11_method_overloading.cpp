#include <iostream>
using namespace std;


    class Math
    {
    public:
        void sum()
        {
            int a = 10, b = 20;
            cout << " One SUM : " << a + b<< endl;
        }
        void sum(int a, int b)
        {
            cout << " two SUM : " << a + b<< endl;
        }
        void sum(int a, int b,int c)
        {
            cout << " three SUM : " << a + b+c<< endl;
        }
        float sum(float a,float b)
        {
            cout << " four  SUM : " << a + b<< endl;
        }
    };


int main()

{
 Math m1;
 m1.sum();
 m1.sum(1,25);
 m1.sum(10,20,39);
 m1.sum(10.1f,20.3f);

    return 0;
}