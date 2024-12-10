//Catching All Exceptions
#include<string.h>
#include<iostream>
using namespace std;

void xhandler(int test) throw () 
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
    // catch(...)
    // {
    //     cout<<"Caught Exception\n";
    // }
    
    catch(int i)
    {
        cout<<"A\n";
    }
    catch(char c)
    {
        cout<<"B\n";
    }
    catch(double d)
    {
        cout<<"C\n";
    }

}
int main()
{
    xhandler(0);
    xhandler(1);
    xhandler(2);
    cout<<"end\n";
    return 0;
}