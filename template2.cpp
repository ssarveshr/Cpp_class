
/*
*->Explicitly overloading a generic function:
*/
#include<iostream>
using namespace std;

template<class x>void swapargs(x &a,x &b)//* generic defination
{
    x temp;
    temp=a;
    a=b;
    b=temp;
}
void swapargs(int &a,int &b)//! explicit defination for int type
{
    int temp;// *type must be changed accordingly
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=10,j=20;
    double a=5.5,b=6.6;
    char s='s',z='a';
    swapargs(i,j);
    swapargs(a,b);
    swapargs(s,z);
    cout<<i<<" "<<j<<endl;
    cout<<a<<" "<<b<<endl;
    cout<<s<<" "<<z<<endl;
    return 0;
}