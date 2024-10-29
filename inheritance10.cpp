//wapcp to call a virtual function through a base class referance 
#include<iostream>
using namespace std;
class base
{
    int i;
    public:
    virtual void set_i()
    {
        cout<<"base\n";
    }
};
class derived : public base
{
    public:
    void set_i()
    {
        cout<<"derived\n";
    }
};
void f(base &r)
{
    r.set_i();
}
int main()
{
    base *b,ob;
    derived d;
    b=&d;
    f(ob);
    f(d);
    f(*b);
    return 0;
}