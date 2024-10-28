/*Develop a C++ program to implement Multiple inheritance for 
performing arithmetic operation of two numbers*/

#include<iostream>
using namespace std;

class n1
{
    public:
    int i;
    n1(int a)
    {
        i=a;
    }
};

class n2
{
    public:
    int j;
    n2(int a)
    {
        j=a;
    }
};

class add:public n1,public n2
{
    int sum;
    public:
    add()
    {
        sum=i+j;
    }

    void display()
    {
        cout<<i<<" + "<<j<<" = "<<sum<<endl;
    }
};