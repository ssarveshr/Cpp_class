//Passing Parameter to BC Constructor
#include<iostream>
using namespace std;
class base
{
    protected:int i;
    public:
    base(int x)
    {
        i=x;
        cout<<"B C Constructor\n";
    }
    ~base()
    {
        cout<<"BC destructor\n";
    }
};

class derived:public base
{
    int j;
    public:
    derived(int x,int y):base(y)
    {
        j=x;
        cout<<"Constructing derived\n";
    }
    ~derived()
    {
        cout<<"Destructing derived\n";
    }
    void show()
    {
        cout<<i<<"\t"<<j<<"\n";
    }
};

int main()
{
    derived ob(10,3);
    ob.show();
}