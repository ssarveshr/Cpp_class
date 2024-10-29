// pointer to derived type

#include<iostream>
using namespace std;

class base
{
    int i;
    public: void seti(int num)
            {
                i=num;
            }
            int geti()
            {
                return i;
            }
};
class derived:public base
{
    int j;
    public: 
    void setj(int num)
    {
        j=num;
    }
    int getj()
    {
        return j;
    }
};
int main()
{
    base *bp;
    derived d;
    bp=&d;
    // bp->setj(10);          //error
    // cout<<bp->getj()<<endl;//error
    //type conversion to access derived class memeber function using base class pointer; 
    ((derived *)bp)->setj(88);
    cout<<((derived *)bp)->getj()<<endl;
    return 0;
}