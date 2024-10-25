
//protectd base class inheritance
#include<iostream>
using namespace std;

class base
{
    protected:int i,j;
    public:
    void setij(int a,int b)
    {
        i=a;
        j=b;
    }
    void showij()
    {
        cout<<i<<j<<endl;
    }
};
class derived:protected base
{
    int k;
    public:void setk()
    {
        setij(10,12);
        k=i*j;
    }
    void showall()
    {
        cout<<k<<" ";
        showij();
    }
};

int main()
{
    derived ob;
    //ob.setij(2,3);wont work (private)--1
    ob.setk();
    ob.showall();
    //ob.showij();wont work (private)--2
    return 0;
}//1 and 2 are illegal access

