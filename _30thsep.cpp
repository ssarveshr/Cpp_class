#include<iostream>
using namespace std;
class cl
{
    int i;
    public: cl(int j)
            {
                i=j;
            }
            int display()
            {
                return i;
            }
};
int main()
{
    cl ob(10);
    cl *ptr;
    ptr=&ob;// address of an object ob assigned to pointer ptr
    cout<<ptr->display()<<endl;//using pointer varible  display func is called
    cl ob1[3]={1,2,3};
    cl *p;
    p=ob1;//address of an object ob1 assigned to pointer ptr
    for(int i=0;i<3;i++)
    {
        cout<<p->display()<<endl;//using pointer varible  display func is called
        p++;
        // cout<<ob1[i].display()<<endl;
    }
}