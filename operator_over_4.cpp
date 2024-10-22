/*Can you provide a description of the following C++ code that 
defines a class comp for representing complex numbers, includes constructors, 
a method for displaying the complex number, 
overloads the + operator for addition, and demonstrates its usage in the main() function?*/
#include<iostream>
using namespace std;
class comp
{
    int r,i;
    public:comp()
    {}
    comp(int p,int q)
    {
        r=p;
        i=q;
    }
    void show()
    {
        cout<<r<<"+ i"<<i<<endl;
    }
    friend comp operator+(comp op1,comp op2);
};
comp operator+(comp op1,comp op2)
{
    comp t;
    t.r=op1.r+op2.r;
    t.i=op1.i+op2.i;
    return t;
}
int main()
{
    comp ob1(10,20),ob2(5,30);
    ob1=ob1+ob2;
    ob1.show();
    return 0;
}