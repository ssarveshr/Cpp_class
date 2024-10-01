#include<iostream>
#include<string.h>
using namespace std;
static int count=0;
class test
{
    public : test(){
        count++;
        cout<<"num of objects created "<<count<<endl;
    }
    ~test()
    {
        //cout<<"destructor executed\n";
        cout<<"num of objects destroyed "<<count<<endl;
        count--;
        //cout<<"destructor executed\n";
    }
};
int main()
{
    test t1,t2,t3;
    return 0;
}