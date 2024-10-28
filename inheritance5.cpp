/*
Granting Access
1) General form:- base-class::Member;
2) By coding "Using" statement
3) By an access declaration within derived class
*/
// 1) General form:- base-class::Member;
// this method is depricated and does not work in new
// C++ versions
#include<iostream>
using namespace std;
class Base
{
    int i;
    public:
    int j,k;
    void seti(int x)
    {
        i=x;
    }
    int geti()
    {
        return i;
    }
};

class derived:private Base
{
    public:
    Base::j;
    Base::seti;
    Base::geti;
    //Base::i; //illegal statement(cannot change original private to public)
    int a;
};

int main()
{
    derived ob;
    //ob.i=10;// illegal (cannot access private)
    ob.j=20;
    //ob.k=30;// illegal(not changed back to public in class derived)
    ob.a=40;
    ob.seti(10);
    
    cout<<ob.geti()<<" "<<ob.j<<" "<<ob.a<<endl;
}