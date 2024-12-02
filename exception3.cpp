//A try block can be localied to a function

#include<iostream>
using namespace std;

void ftest(int test)
{
    try
    {
        if (test)
            throw test;
    }
    catch(int i)
    {
        cout << "Caught exception : " << i << endl;
    }
}

int main()
{
    cout<<"Start\n";
    ftest(1);
    ftest(2);
    ftest(0);
    ftest(3);
}