/*
*virtual functions are hierarchial
*/
#include<iostream>
using namespace std;
class base
{
    public: 
    virtual void vfunc()
    {
        cout<<"base vfunc\n";
    }
};
class derived1:public base
{
    public:
    void vfunc()
    {
        cout<<"dc vfunc\n";
    }
};
class derived2:public base/*derived1 in vfunc1.cpp*/
{
    /*vfunc() not overridden*/
};
int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;
    p=&b;
    p->vfunc();
    p=&b;
    p->vfunc();
    p=&d1;
    p->vfunc();
    p=&d2;
    p->vfunc();/* as derived 2 does not redefine vfunc (void vfunc) when function call occurs
                it will call the vfunc of base class*/
}
