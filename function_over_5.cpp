// WAP to create different different squence of parameters
#include<iostream>
using namespace std;
void add(int a,double b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void add(double a,int b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
int main()
{
    add(10,5.8);
    add(10.5,5);
    return 0;
}