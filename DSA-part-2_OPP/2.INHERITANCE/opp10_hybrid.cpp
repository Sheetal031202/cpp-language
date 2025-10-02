#include <iostream>
using namespace std;

// multilevel inheritance

class A
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter A : ";
        cin >>  this->a;
    }
    void getA()
    {
        cout << "A: " << this->a << endl;
    }
};


class B :public A
{
protected:
    int b;

public:
    void setB()
    {
        cout << "Enter B : ";
        cin >> this-> b;
    }
    void getB()
    {
        cout << "B: " <<  this->b << endl;
    }
};

class C:public A
{
protected:
    int c;

public:
    void setC()
    {
        cout << "Enter C : ";
        cin >>  this->c;
    }
    void getC()
    {
        cout << "C : " <<  this->c << endl;
    }
};

class D:public B,public C
{
protected:
    int d;

public:
    void setD()
    {
        cout << "Enter D : ";
        cin >>  this->d;
    }
    void getD()
    {
        cout << "D : " <<  this->d<< endl;
        // cout << "SUM : "<< a+b+c+d;
    }
};
int main()
{


    // last child no object banavano


    D d1;
    // d1.setA();
d1.B::setA();
    d1.setB();
    d1.setC();
    d1.setD();

    // d1.getA();
    d1.B::getA();

    d1.getB();
    d1.getC();
    d1.getD();


    

    return 0;
}
// aaya ambiguos ni eroor aave chhe upar bcoz em lage chhe ke duplicate thay chhe bcoz class b ma setA getAchhe and classc  c ma bhi setA getAchhe 
// to have scope resolution nouse thase here 