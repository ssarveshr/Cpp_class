/*function overriding,virtual function
*function overriding is used to describe virtual functions' redefination by a derivied class
    ->virtual function cant be friend
    ->can't be used with a constructor 
    ->can't be used with a destructor
    ->cant not be static members of the classes 
function overriding the defination differs and prototype is same

*/
#include<iostream>
using namespace std;
class base
{
    int i;
    public:
    virtual void vfunc()
    {
        cout<<"BC vfunction\n";
    }
};
class derived_1:public base
{
    public:
    void vfunc()
    {
        cout<<"D1 vfunction\n";
    }
};
class derived_2:public base
{
    public:
    void vfunc()
    { 
        cout<<"D2 vfunction\n";
    }
};
int main()
{
    base *p,b;
    derived_1 d1;
    derived_2 d2;
    //ptr tp base
    p=&b;
    p->vfunc();
    //ptr to derived_1
    p=&d1;
    p->vfunc();
    //ptr to derived_2
    p=&d2;
    p->vfunc();
    return 0;
}