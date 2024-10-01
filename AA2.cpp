#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *ptr=&a;
    cout<<"the value of a is"<<*ptr<<endl;
    int *p=new int(40);
    cout<<"value at address p is"<<*(p)<<endl;
    int *arr=new int[3];
    arr[0]=10,arr[1]=20,arr[2]=30;
    // delete []arr;
    cout<<arr[0]<<"\n"<<arr[1]<<"\n"<<arr[2]<<endl;
    return 0;    
}