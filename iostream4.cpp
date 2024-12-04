#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("inventry");
    if(!out)
    {
        cout<<"Cannot open file\n";
        return 1;
    }
    out<<"Radio<<39.95"<<endl;
    out.close();
    return 0;
}