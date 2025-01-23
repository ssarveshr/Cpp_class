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
    base *p;
    //base b; (error) abstract class cannot have a object
    derived1 d1;
    derived2 d2;
    p=&d1;
    p->vfunc();
    p=&d2;
    p->vfunc()
}
/*
If their is no meaningfull defination of a virtual function within the base class 
    example: A base class may not be able to define an object sufficiently to allow a base class 
             virtual function to be created or we will want to ensure that all derived classes 
             override a virtual function 
    the above two cases can be handled by using pure virtual function.

    syntax: 
            virtual return_type function_name(parameter_list)=0;
*/