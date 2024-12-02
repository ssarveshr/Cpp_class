//Catching Derived class

#include<iostream>
#include<string.h>
using namespace std;

class B
{
};
    
class D:public B
{

};
int main()
{
    D derived;
    try
    {
        throw derived;
    }
    catch(B b)
    {
        cout<<"Caught a B class\n";
    }
    catch(D d)
    {
        cout<<"Caught a D class \n";
    }
    return 0;
}