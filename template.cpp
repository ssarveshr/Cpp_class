/*
->using templates its possible to create generic functions and class.
->The type of the data upon which the function or class operates is sepcified as a paramater 
->With out explicitly recoding each of the function for specific versions for specific datatype can be done
  using these generic functions or generic class
!->template<class x>void swapargs(x &a,x &b)
  tells the compiler that a template is created anf a gewneric defination is beginning 
!->syntax: template<class Ttpye> return_type func_name(paprameter_list){
!        //body of the function
!    }
  ttype is a plae holder for the datatype used by the function.This will be automatically replaced by
  an actually data type by the compiler when it creats a specific verison of the function  
*/
#include<iostream>
using namespace std;

template<class x>void swapargs(x &a,x &b)
{
    x temp;
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