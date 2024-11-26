//Class question Shift elements in array
#include<iostream>
using namespace std;
template<class x,class y>
void compact(x a[],y a1,y a2,y a3)
{
    for(int i=a2;i<=a3;i++)
    {
        a[i]=0;
    }
    for(int i=a3+1;i<a1;i++)
    {
        a[i-((a3-a2)+1)]=a[i];
        a[i]=0;
    }
    for(int i=0;i<a1;i++)
        cout<<a[i];
    cout<<endl;
}
int main()
{
    int a[]={0,1,2,3,4,5,6};
    compact(a,7,2,4);
    char aa[]={"GENERIC FUNCTIONS"};
    compact(aa,18,6,10);
}