//Catching Class Types

#include<iostream>
#include<string.h>
using namespace std;

class MyException
{
    public:char str_what[80];
    int what;
    MyException()
    {
        *str_what=0;
        what=0;

    }
    MyException(char *s,int e)
    {
        strcpy(str_what,s);
        what=e;
    }
};

int main()
{
    int i;
    try
    {
        cout<<"Enter a +ve no";
        cin>>i;
        if(i<0)
            throw MyException("Not +ve\n",i);
    }
    catch(MyException e)
    {
        cout<<e.str_what<<"\n";
        cout<<e.what<<"\n";
    }
    return 0;
}