/*Develop a C++ program using Operator Overloading 
for overloading Unary minus operator.*/
#include <iostream>
using namespace std;
class Number 
{
    int val;
    public:
    Number(int n)
    { 
        val=n;
    }
    void display()
    {
        cout<<"Number is " << val<<endl;
    }
    // overloaded minus(-) operator
    Number operator-() 
    {
        val = -val;
        return Number(val); // unnamed object
    }
};
int main() 
{
    Number n1(3), n2(-1);
    n1 = -n1;
    n1.display();
    n2 = -n2;
    n2.display();
    return 0;
}