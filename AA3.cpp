#include<iostream>
#include<string.h>
using namespace std;
class test
{
    public : test(){
        cout<<"constructor executed\n";
    }
    ~test()
    {
        cout<<"destructor executed\n";
    }
};
int main()
{
    test t;
    return 0;
    
}