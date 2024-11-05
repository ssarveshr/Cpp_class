/*wap with base class as a number contains and integer val .A function setval() and a pure 
    virtual function calls show.
    Three devried classes 
        ->hextype
        ->dectype
        ->octtype
inherits number and defines the show function.The output the value of val changed in each 
repective class.*/
#include<iostream>
#include<math.h>
using namespace std;
class number
{
    protected: int val;
    public:
    void setval(int x)
    {
        val=x;
    }
    virtual void show()=0;
};
class hextype:public number
{
    public:
    void show()
    {
        cout<<"hex type "<<hex<<val<<endl;
    }
};
class dectype:public number
{
    public:
    void show()
    {
        cout<<"dec type "<<dec<<val<<endl;
    }
};
class octtype:public number
{
    public:
    void show()
    {
        cout<<"oct type "<<oct<<val<<endl;
    }
};
int main()
{
    number *p;
    hextype h;
    dectype d;
    octtype o;
    p=&h;
    p->setval(100);
    p->show();

    p=&o;
    p->setval(100);
    p->show();

    p=&d;
    p->setval(100);
    p->show();


    
    // p=&d;
    // p->setval(100);
    // p->show();
    
    return 0; 
}
