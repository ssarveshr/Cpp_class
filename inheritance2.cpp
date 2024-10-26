//Constructor,Destructor and inheritance

#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"B C Constructor\n";
    }
    ~base()
    {
        cout<<"B C Destructor\n";
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"D C Constructor\n";
    }
    ~derived()
    {
        cout<<"D C Destructor\n";
    }
};

int main()
{
    derived ob;
    return 0;
}