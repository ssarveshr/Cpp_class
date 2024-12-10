#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    fstream fh;
    char str[200];
    fh.open("file1.txt",ios::out);
    if(!fh.is_open())
    {
        cout<<"Unable to open file"<<endl;
        exit(1);
    }

    fh<<"Sample text file";
    fh<<"2nd line of file";
    fh.close();
    fh.open("file1.txt",ios::in);
    fh.getline(str,90,'\n');
    cout<<str<<endl;
    fh.getline(str,90,'\n');
    cout<<str;
    fh.close();
    return 0;

}