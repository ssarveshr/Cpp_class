//wap to inherite properties of multiple Base Classes
#include<iostream>
using namespace std;

class base1
{
    int i=0;
    public:
    base1(int x)
    {
        i=x;
        cout<<"Base1 contructor"<<endl;
        cout<<"i="<<i<<endl;
    }
    ~base1()
    {
        cout<<"Base1 destructor"<<endl;
    }
};

class base2
{
    int i=0;
    public:
    base2(int x)
    {
        i=x;
        cout<<"Base2 constructor"<<endl;
        cout<<"i="<<i<<endl;
    }
    ~base2()
    {
        cout<<"Base2 destructor"<<endl;
    }
};

class derived:public base1,public base2
{
    public:
    derived(int x,int y):base1(x),base2(y)
    {
        cout<<"Derived constructor"<<endl;
    }
    ~derived()
    {
        cout<<"Derived destructor"<<endl;
    }
};

int main()
{
    derived ob(10,3);
}