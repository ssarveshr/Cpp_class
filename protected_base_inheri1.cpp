//inheriting multiple base class

#include<iostream>
using namespace std;
class base
{
    protected:int x;
    public:
    void showx()
    {
        cout<<x;
    }
};

class base2
{
    protected:int y;
    public:
    void showy()
    {
        cout<<y<<'\n';
    }
};

class derived :public base,public base2
{
    public:
    void set(int i,int j)
    {
        x=i;
        y=j;
    }
};

int main()
{
    derived ob;
    ob.set(10,20);
    ob.showx();
    ob.showy();
    return 0;
}