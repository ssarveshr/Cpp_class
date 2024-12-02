//Catching All Exceptions
#include<string.h>
#include<iostream>
using namespace std;

void xhandler()
{
    try
    {
        throw "Hello";
    }
    catch(const char*)
    {
        cout<<"Caught char* inside xhandler\n";
        throw;
    }
}

int main()
{
    cout<<"Start\n";
    try
    {
        xhandler();
    }
    catch(const char*)
    {
        cout<<"Caught char* inside main\n";
    }
    cout<<"end";
    return 0;
}