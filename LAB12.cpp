/*Develop a C++ program that handles array out of bounds exception using C++.*/
#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    char s[] = "Array Index out of bound";
    try
    {
        for(int i=0;i<6;i++)
        if (i >= 4)
            throw s;
    }
    catch (char *s)
    {
        cout<<"Exception :"<<s;
    }
    return 0;
}