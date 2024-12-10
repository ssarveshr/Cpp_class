/*Develop a C++ program using Constructor in Derived classes
to initialize alpha, beta and gamma and display corresponding values.*/

#include <iostream>
using namespace std;
class Base
{
    int alpha;
    char beta;
    float gamma;
    public:
    Base(int a, char b, float g) : alpha(a),beta(b),gamma(g)
    {
        cout<<"In base class constructor\n";
    }
    void display()
    {
        cout<<"alpha "<<alpha<<endl;
        cout<<"beta "<<beta<<endl;
        cout<<"gamma "<<gamma<<endl;
    }
};

class Derived : public Base
{
    public:
    Derived(int a, char b, float g) : Base(a,b,g)
    {
        cout<<"In derived class constructor\n";
    }
};

int main()
{
    Derived d(1,'2',3.2);
    d.display();
    return 0;
}