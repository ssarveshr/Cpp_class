#include<iostream>
using namespace std;

void xhandler(int test)
{
    try
    {
        if (test)
        {
            throw test;
        }
        else
        {
            throw "Value of Zero ";
        }
    }
    catch(int i)
    {    
        cout<<"Caught Exception "<<i<<endl;
    }
    catch(const char *str)
    {    
        cout<<"caught a string "<<str<<endl;
    }
}
int main()
{
    cout<<"Start\n";
    xhandler(1);
    xhandler(2);
    xhandler(0);
    xhandler(3);
    // xhandler(1);
    return 0;
}