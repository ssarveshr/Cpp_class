/*
pure virtual functions are hierarchial
*/
#include<iostream>
using namespace std;
class base/*base class is now an abstrac class because it contains one or more than one 
            pure virtual function*/ 
{
    public: 
    virtual void vfunc()=0;//pure virtual function , all derived class must override function
};
class derived1:public base
{
    public:
    void vfunc()//derived1 function overriding;
    {
        cout<<"dc1 vfunc\n";
    }
};
class derived2:public base
{
    void vfunc()//derived2 function overriding;
    {
        cout<<"dc2 vfunc\n";
    }
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
/*
If their is no meaningfull defination of a virtual function within the basae class 
    example: A base class may not be able to define an object sufficiently to allow a base class 
             virtual function to be created or we will want to ensure that all derived classes 
             override a virtual function 
    the above two cases can be handled by using pure virtual function.

    syntax: 
            virtual type function_name(parameter_list)=0;
*/