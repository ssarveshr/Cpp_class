//No Throw keyword used
#include<iostream>
using namespace std;

int main()
{
    cout<<"Start\n";
    try
    {
        cout<<"Inside Try block\n";
        cout<<"Still inside try block\n";
    }
    catch(int i)
    {
        cout<<"Caught exception\n";
    }
    cout<<"end";
}