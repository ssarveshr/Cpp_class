/*
*virtual functions are inherited(cont vfunc0.cpp)
*/
#include<iostream>
using namespace std;
class base
{
    public: 
    virtual void vfunc()
    {
        cout<<"basic vfunc\n";
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
class derived2:public derived1
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
                it will call the vfunc of derived1 class*/
}
