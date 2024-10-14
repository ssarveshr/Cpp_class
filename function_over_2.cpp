// WAP to create different number of parameters
#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void add(int a,int b,int c)
{
    cout<<"sum = "<<(a+b+c)<<endl;
}
int main()
{
    add(10,5);
    add(10,10,20);
    return 0;
}