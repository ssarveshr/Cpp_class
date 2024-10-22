#include <iostream>
using namespace std;
void add(int, int);
void add(double, double);

void accept(int &, int &);
void accept(double &, double &);
int main()
{
    int a, b;
    double c, d;
    accept(a, b); 
    accept(c, d);
    add(a, b);
    add(c, d);
    return 0;
}

void accept(int &a, int &b)
{
    cout << "Enter 2 integer values\n";
    cin >> a >> b;
}
void accept(double &c, double &d)
{
    cout << "Enter 2 double values\n";
    cin >> c >> d;
}
void add(int a, int b)
{
    cout << "Integer addition " << (a + b) << endl;
}
void add(double a, double b)
{
    cout << "Double addition " << (a + b) << endl;
}