#include<iostream>
using namespace std;

class complex
{
    float real,img;
    public:void readnum()
    {
        cin>>real>>img;
    }
    complex addNum(complex o1,complex o2)
    {
        complex c3;
        //int R,I;
        c3.real=o1.real+o2.real;
        c3.img=o1.img+o2.img;
        cout<<c3.real<<"+i"<<c3.img<<endl;
        return c3;
    }
    void disp()
    {
        cout<<"object printing"<<endl;
        cout<<real<<"+i"<<img;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.readnum();
    c2.readnum();
    c3=(c3).addNum(c1,c2);
    (c3).disp();

}
