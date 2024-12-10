// WAP to create different types of data
#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void add(double a,double b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
int main()
{
    add(10,5);
    add(10.5,5.8);
    return 0;
}