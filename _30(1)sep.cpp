#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public: complex(int i,int j)
            {
                real=i;
                img=j;
            }
            int get_r()
            {
                return real;
            }
            int get_i()
            {
                return img;
            }
            void display()
            {
                cout<<real<<" + i"<<img<<endl;
            }
};
complex add(complex a,complex b)
{
    int r1=a.get_r();
    int i1=a.get_i();
    int r2=b.get_r();
    int i2=b.get_i();
    int R=r1+r2;
    int I=i1+i2;
    complex c(R,I);
    return c;
}
int main()
{
    complex c0(10,20);
    complex c1(10,20);
    add(c0,c1).display();
}