//Throwing an exception from a fucntion outside the try block

#include<iostream>
using namespace std;

void ftest(int test)
{
    cout<<"Inside ftest"<<test<<endl;
    if(test)
    {
        throw test;
    }
}

int main()
{
    cout<<"Start\n";
    try
    {
        cout<<"Inside try block\n";
        ftest(0);
        ftest(1);
        ftest(2);
    }
    catch(int i)
    {
        cout<<"Caught exception "<<i<<endl;
    }
    cout<<"end";
    return 0;

}