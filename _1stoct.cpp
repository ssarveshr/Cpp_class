#include<iostream>
using namespace std;

class array
{
    int *p,size;
    public:array(int sz)
    {
        p=new int[sz];
        size=sz;
    }
    // array(const array &a)
    // {
    //     int i;
    //     p=new int[a.size];
    //     for(i=0;i<a.size;i++)
    //     {
    //         p[i]=a.p[i];
    //     }
    // }
    ~array(){}
    void put(int i,int j)
    {
        if(i>=0 && i<size)
            p[i]=j;
    }
    int get(int i)
    {
        return p[i];
    }
    
};

int main()
{
    array num(10);
    int i;
    for(i=0;i<10;i++)
    {
        num.put(i,i);
    }
    for(i=9;i>=0;i--)
    {
        //cout<<"haha"<<num.get(i)<<endl;
    }
    array x(num);
    num.put(3,90);

    for(i=0;i<10;i++)
    {
        //cout<<"hehe"<<x.get(i)<<endl;
    }
    cout<<num.get(3)<<endl;
    cout<<x.get(3)<<endl;
}