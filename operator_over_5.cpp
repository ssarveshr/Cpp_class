#include<iostream>
using namespace std;
class loc
{
    int l,i;
    public:loc()
    {}
    loc(int p,int q)
    {
        l=p;
        i=q;
    }
    void show()
    {
        cout<<l<<" + "<<i<<endl;
    }
    friend loc operator+(loc op1,int op2);
    friend loc operator+(int op1,loc op2);
};
loc operator+(loc op1,int op2)
{
    loc t;
    t.l=op1.l+op2;
    t.i=op1.i+op2;
    return t;
}
loc operator+(int op1,loc op2)
{
    loc t;
    t.l=op1+op2.l;
    t.i=op1+op2.i;
    return t;
}
int main()
{
    loc ob1(10,20),ob2(5,30),ob3;
    ob1.show();
    ob2.show();
    ob1=ob2+10;
    ob3=10+ob2;
    ob1.show();
    ob3.show();
    return 0;
}