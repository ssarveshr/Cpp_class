#include<iostream>
#include<string.h>
using namespace std;

class car 
{
    public:string brand;
           char model[3];
           int year;
};
int main()
{
    car ob1;
    ob1.brand="BMW";
    gets(ob1.model);
    // ob1.model="M5";
    ob1.year=2000;
    cout<<"model :"<<ob1.model<<endl;
    cout<<"brand :"<<ob1.brand<<endl;
    cout<<"year :"<<ob1.year<<endl;

    return 0;
}