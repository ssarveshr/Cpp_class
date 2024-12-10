#include<iostream>
#include<stdlib.h>
//#include<windows.h>
using namespace std;
class loc
{
    int l,i;
    public:loc()
    {}
    loc(int p,int q)
    {
        l=p;
        i=q;
    }
    void show()
    {
        cout<<l<<" + "<<i<<endl;
    }
    void *operator new(size_t size);
    void operator delete(void *p);
};
void* loc::operator new(size_t size)
{
    void *p;
    cout<<"In overloaded new \n";
    p=malloc(size);
    if(!p)
    {
        cout<<"Memory allocated failed"<<endl;
        exit(0);
    }
    return p;
}
void loc::operator delete(void *p)
{
    cout<<"In overloaded delete \n";
    free(p);
}
int main()
{
    loc *p1, *p2;
    p1=new loc(10,20);
    p2=new loc(30,40);
    p1->show();
    p2->show();
    delete p1;
    delete p2;

}
/*new and delete are specific to class the use of the operator on any other type of data causes the
 *original new or delete to be called 
 *New and delete operators can also be overloaded globally outside of any class any declaration 
   */