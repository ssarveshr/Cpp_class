//Stream->logical device->producer/consumer info

/*
Iostream 3 categories

1.Template Classes
->basic_ios
->basic_ostream
->basic_istream

2.Character based classes
->ios
->istream
->ostream
->fstream
->ifstream
->ofstream

3.Wide-character based class
->wios
->wistream
->wostream



*/

#include<iostream>
using namespace std;

int main()
{
    cout.precision(4);
    cout.width(10);
    cout<<10.12345<<"\n";
    cout.fill('*');
    cout.width(10);
    cout<<10.12345<<"\n";
    cout.width(10);
    cout<<"Hi"<<"\n";
    cout.width(10);
    cout.setf(ios::left);
    cout<<10.12345<<"\n";
    return 0;
}