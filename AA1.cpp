#include<iostream>
#include<string.h>
using namespace std;
class item
{
    int number;
    float cost;
    public:void getdata(int,float);
            void putdata()
            {
                cout<<"number :"<<number<<"\ncost :"<<cost<<endl;
            }
};
void item::getdata(int a,float b)
{
    number=a;
    cost=b;

}
int main()
{
    item ob;
    int x;
    float y;
    cout<<"enter value of number :";
    cin>>x;
    cout<<"enter value of cost :";
    cin>>y;
    ob.getdata(x,y);
    ob.putdata();
    return 0;
}