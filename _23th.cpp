#include<iostream>
#include<string.h>
using namespace std;
class cars
{
    string com_name,model,fuel;
    float milage;
    double price;
    public : cars(){
        cout<<"default constructor\n";
    }
    void setdata(string cname,string mname,string fname,float mil,double cost)
    {
        com_name=cname;
        model=mname;
        fuel=fname;
        milage=mil;
        price=cost;
    }
    void display()
    {
        cout<<com_name<<" "<<model<<" "<<fuel<<" "<<milage<<" "<<price<<endl;
    }
};
int main()
{
    cars car1;
    car1.setdata("MG","hector","diseal",11111,101010);
    car1.display();
    return 0;
}