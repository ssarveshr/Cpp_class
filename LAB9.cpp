/*Develop a C++ program to create a text file, check file created or not, if created it will write some
text into the file and then read the text from the file.*/
#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream fh;
    char str[200];
    fh.open("File_1.txt", ios::out);
    if( !fh.is_open() )
    {
        cout << "File did not open!";
        exit(1);
    }
    fh<< "This is a sample text File. " << endl;
    fh<< "This is the second line of the file. " << endl;
    fh.close();
    fh.open("File_1.txt",ios::in);
    fh.getline(str,90,'\n'); cout<<str<<endl;
    fh.getline(str,90,'\n'); cout<<str<<endl;
    fh.close();
    return 0;
}