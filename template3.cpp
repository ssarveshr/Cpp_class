/*
*-> Overloading a Function Template
*/
#include<iostream>
using namespace std;
template<class x>
void f(x a)
{
    cout<<"inside f(x a)"<<endl;
}
template<class x,class y>
void f(x a,y b)
{
    cout<<"inside f(x a,x b)"<<endl;
}
int main()
{
    f(10);
    f(10,20);
    f("10");
    f("10","100");
    f(10.5,11.5);
    f(10000,"samudra");
    f("a");
}