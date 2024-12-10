//*Exception Handling
/*
try
{
    code that might throw an exception
}
catch (exception_type arg)
{
    code to handle the exception
}
throw exception;
*/
/*
C++ exception handling is done using 3 key words
--> Try
--> Catch
--> Throw

1.The program statements that has to be monitered for exceptions or errors
are written inside the "Try" block

2.If an exception occurs within "Try" block it is thrown
using the keyword "Throw"

3.The exception is caught using the keyword "catch" and then processed
*/


#include<iostream>
using namespace std;

int main()
{
    cout<<"Start\n";
    try
    {
        cout<<"Inside try block\n";
        throw 100;
        cout<<"This will not be executed/printed\n";
    }
    
    //catch(double i) try it(abnormal termination)
    catch(int i)

    {
        cout<<"Caught exception: "<<endl;
        cout<<i<<"\n";
    }
    cout<<"end\n";
    return 0;
}