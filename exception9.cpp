//!Develop a function to throw a DivisionByZero exc0eption()
//Wap to write try catch throw to handle exception
//wap to handle ArrayOutOfBound exception

#include<iostream>
#include <ostream>
using namespace std;
char s[]={"ZeroByDivisionError"};
int Division(int a,int b)
{
    try
    {
        if(b<0)
            throw s;
        else
        {
            return a/b;
        }
    }
    catch(char s[])
    {
        cout<<"Caught exception : "<<s<<endl;
        cout<<"because b is less than Zero\n"<<b<<endl;
        exit(0);
    }
}

int main()
{
    int number1,number2;
    cout<<"Enter the value of Number1 : ";
    cin>>number1;
    cout<<"Enter the value of Number2 : ";
    cin>>number2;
    cout<<"Result = "<<Division(number1, number2)<<endl;
    return 0;
}