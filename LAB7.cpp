/*Develop a C++ program to implement Multiple inheritance for 
performing arithmetic operation of two numbers*/

#include <iostream>
using namespace std;
class N1
{
    int val1;
    public:
    N1(int n)
    {
        val1=n;
        cout<<"***** N1 constructor called\n";
    }
    int get_n1()
    { 
        return val1; 
    }
};

class N2
{
    int val2;
    public:
    N2(int n)
    {
        val2=n;
        cout<<"***** N2 constructor called\n";
    }
    int get_n2()
    { 
        return val2; 
    }
};

class add : public N1, public N2
{
    int res;
    public:
    add(int a, int b) : N1(a),N2(b) 
    { 
        res=0;
    }
    void add_dis()
    {
        res = get_n1() + get_n2();
        cout<<"Result of addition is "<<res<<endl;
    }
};
int main() 
{
    int a, b;
    cout<<"Enter 2 integer values\n";
    cin>>a>>b;
    add ob(a,b);
    ob.add_dis();
    return 0;
}