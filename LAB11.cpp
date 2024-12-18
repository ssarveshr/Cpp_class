/*Develop a function which throws a division by zero exception and catch it in catch block. Write a
C++ program to demonstrate usage of try, catch and throw to handle exception.*/
#include <fstream>
#include <iostream>
using namespace std;
char s[40]={"Division by zero"};
void fun()
{
    int a=90,b=0;
    if (b==0) 
        throw s;
}
int main()
{
    try
    {
        fun();
    }
    catch(char *s)
    {
        cout<<"Exception caught ... "<<s;
    }
    return 0;
}