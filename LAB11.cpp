#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
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