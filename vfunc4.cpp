/*
*create a  base class as convert which decalars two valriables val1 val2 which hold the inital and 
converted values respectively 
define two function getinit() and getconv() which returns the initial value and the converted value 
respectively
Create a pure virtual function compute() 
Creat three derived classes which converts 
    1) liters to gallon (val2=val1/3.7854)
    2) fariheit to celciase (val2=(val-32)/1.8)
    3) feet to meters (val2=val1/3.28)
*/

#include<iostream>

using namespace std;

class convert
{
    protected: float val1,val2;
    public: 
    float getinit()
    {
        cout<<"Enter the value of value 1 \n";
        cin>>val1;
        return val1;
    }
    float getconv()
    {
        return val2;
    }
    virtual void compute()=0;
};

class volume:public convert
{
    public:
    void compute()
    {
        val2=val1/3.7854;
    }
};

class temperature:public convert
{
    public:
    void compute()
    {
        val2=(val1-32)/1.8;
    }
};

class dist:public convert
{
    public:
    void compute()
    {
        val2=val1/3.28;
    }
};

int main()
{
    convert *pointer;
    volume v;
    dist d;
    temperature t;

    pointer=&v;
    float v1=pointer->getinit();
    pointer->compute();
    float v2=pointer->getconv();
    cout<<v2<<" <-v2 v1-> "<<v1<<endl;

    pointer=&t;
    v1=pointer->getinit();
    pointer->compute();
    v2=pointer->getconv();
    cout<<v2<<" <-v2 v1-> "<<v1<<endl;

    
    return 0;
}