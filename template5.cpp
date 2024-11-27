/*
template<class Ttype>class class_name
{
    *body
}
*class_name<type> ob
*/
#include<iostream> 
#include<stdlib.h> 
using namespace std;
const int size=10;
template<class STACKTYPE>class stack
{
    STACKTYPE stck[size];
    int tos;
    public: stack()
            {
                tos=-1;
            }
    void push(STACKTYPE ob);
    STACKTYPE pop();
};
template<class STACKTYPE>
void stack<STACKTYPE>::push(STACKTYPE ob)
{
    if(tos==size-1)
    {
        cout<<"stack full"<<endl;
        return;
    }
    ++tos;
    stck[tos]=ob;
}
template<class STACKTYPE>
STACKTYPE stack<STACKTYPE>::pop()
{
    //body
    if(tos==-1)
    {
        cout<<"stack empty\n";
        // return ;
        exit(0);
    }
    STACKTYPE ele=stck[tos];
    tos--;
    return ele;
}
int main()
{
    stack<char>s1,s2;
    int i;
    // s1.push('a');
    // s1.push('b');
    // s1.push('c');
    // s1.push('d');
    // s2.push('x');
    for(int i=0;i<4;i++)
    {
        char in;
        cin>>in;
        s1.push(in);
    }
    for(int i=0;i<4;i++)
    {
        cout<<s1.pop()<<endl;
    }
    //* double
    stack<double>d1,d2;
    for(int i=0;i<4;i++)
    {
        double in;
        cin>>in;
        d1.push(in);
    }
    for(int i=0;i<4;i++)
    {
        cout<<d1.pop()<<endl;
    }
    return 0;
}