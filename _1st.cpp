#include<iostream>
using namespace std;

class test
{
    public:test(test &t)
    {}
    test()
    {}
};
test fun()
{
    cout<<"func called \n";
    test t;
    return t;
}
int main()
{
    test t1;
    test t2;
    t2=fun();
}