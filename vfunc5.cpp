/*
write a prorgram area of rectangle , circle , square , triangle , using pure virtual functions 
*/
#include<iostream>
using namespace std;
class a
{
    public:
    virtual void area()=0;
    virtual void display()=0;
};
class rectangle:public a
{
    int a,b;
    float res;
    public:
    rectangle(int x,int y)
    {
        a=x;
        b=y;
    }
    void area()
    {
        res= a*b;
    }
    void display()
    {
        cout<<"area of rectangle : "<<res<<endl;
    }
};
class circle:public a
{
    int a;
    float res;
    public:
    circle(int x)
    {
        a=x;
    }
    void area()
    {
        res= 3.14*(a*a);
    }
    void display()
    {
        cout<<"area of circle : "<<res<<endl;
    }

};
class square:public a
{
    int a;
    float res;
    public:
    square(int x)
    {
        a=x;
    }
    void area()
    {
        res= a*a;
    }
    void display()
    {
        cout<<"area square : "<<res<<endl;
    }
};
class triangle:public a
{
    int a,b;
    float res;
    public:
    triangle(int x,int y)
    {
        a=x;
        b=y;
    }
    void area()
    {
        res= a*b;
    }
    void display()
    {
        cout<<"area of triangle : "<<res<<endl;
    }
};
int main()
{
    a *pointer;
    rectangle r(1,2);
    circle c(3);
    square s(6);
    triangle t(5,1);
    pointer=&r;
    pointer->area();
    pointer->display();
    pointer=&c;
    pointer->area();
    pointer->display();
    pointer=&s;
    pointer->area();
    pointer->display();
    pointer=&t;
    pointer->area();
    pointer->display();
    return 0;
}