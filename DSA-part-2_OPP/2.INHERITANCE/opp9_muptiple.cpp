#include <iostream>
using namespace std;

class FATHER
{
protected:
    double amt1;

    FATHER()
    {
        this->amt1 = 300;
    }
};


class MOTHER
{
protected:
    double amt2;

    MOTHER()
    {
        this->amt2 = 200;
    }
};


class BRO
{
protected:
    double amt3;

    BRO()
    {
        this->amt3 = 200;
    }
};
// 

class ME :public FATHER,MOTHER,BRO{
    public:
    void total(){
        double total=amt1+amt2+amt3;
        cout << "my total pocket money : " << total;
    }
};


// father, mother bro nbadha patents chhe onli me cjild class chee
int main()
{
    ME m1;
m1.total();
}