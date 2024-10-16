#include<iostream>
using namespace std;

void clrscr(int size=25);

int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        cout<<i;
    }

    // cin.get();
    clrscr(5);//clears 25 lines
    for(i=0;i<10;i++)
    {
        cout<<i;
    }
    // cin.get();
    clrscr(2);//clears 10 lines
    return 0;
}
void clrscr(int size)
{
    for(;size>=0;size--)
        cout<<endl;
}