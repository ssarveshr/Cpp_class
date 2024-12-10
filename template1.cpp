/*
* Function with two generic types
*/
#include<iostream>
using namespace std;
template<class type1,class type2>
void myfunc(type1 x,type2 y)
{
    cout<<x<<"\n"<<y<<endl;
}
int main()
{
    myfunc(10,"c++");
    myfunc(80.5,1050000);
    return 0;
}

