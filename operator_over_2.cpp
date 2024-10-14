// program to add longitude and latitude and storing in a varible LOC  
#include<iostream>
using namespace std;
class sample
{
    int lon,lat;
    public: sample()
            {
                lon=lat=0;
            }
            sample(int a,int b)
            {
                lon=a;
                lat=b;
            }
            void print()
            {
                cout<<"latitude"<<lat<<"\n"<<"longitude"<<lon<<endl;
            }
            // operator overloading function
            sample operator+(sample &c)
            {
                sample t;
                t.lon=lon+c.lon;
                t.lat=lat+c.lat;
                return t;
            }
};
int main()
{
    sample c1(2,4);
    sample c2(2,3);
    sample c3;
    c3=c1+c2;
    c3.print();
    return 0;
}
