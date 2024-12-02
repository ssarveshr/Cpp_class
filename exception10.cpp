//Catching All Exceptions
#include<string.h>
#include<iostream>
using namespace std;

void xhandler(int test)
{
    try
    {
        if(test==0)
            throw test;
        if(test==1)
            throw 'a';
        if(test==2)
            throw 12.5;
    }
    catch(...)
    {
        cout<<"Caught Exception\n";
    }
}