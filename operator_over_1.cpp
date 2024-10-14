// program to add two complex numbers  
#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public: complex()
            {
                real=img=0;
            }
            complex(int a,int b)
            {
                real=a;
                img=b;
            }
            void print()
            {
                cout<<real<<"+ i"<<img<<endl;
            }
            // operator overloading function
            complex operator+(complex &c)
            {
                complex t;
                t.real=real+c.real;
                t.img=img+c.img;
                return t;
            }
};
int main()
{
    complex c1(2,4);
    complex c2(2,3);
    complex c3;
    c3=c1+c2;
    c3.print();
    return 0;
}