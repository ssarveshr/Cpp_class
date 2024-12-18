/*Develop a C++ program to write and read time in/from binary file using fstream*/
#include <fstream>
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    fstream fh;
    int h,m,s;
    fh.open("File_1.txt", ios::out|ios::binary);
    if(!fh.is_open())
    {
        cout << "File did not open!";
        exit(1);
    }
    cout<<"Enter time in hh mm ss format\n";
    cin>>h>>m>>s;
    fh.write((char *)&h,sizeof(int));
    fh.write((char *)&m,sizeof(int));
    fh.write((char *)&s,sizeof(int));
    fh.close();
    fh.open("File_1.txt",ios::in);
    int h1,m1,s1;
    fh.read((char *)&h1,sizeof(int));
    fh.read((char *)&m1,sizeof(int));
    fh.read((char *)&s1,sizeof(int));
    cout<<h1<<":"<<m1<<":"<<s1;
    fh.close();
    return 0;
}