/*
Granting Access
1) General form:- base-class::Member;
2) By coding "Using" statement
3) By an access declaration within derived class
*/
// 3) By an access declaration within derived class(Virtual Base Class)

// 1)"Virtual" keywoard create a single copy of a class(here it is base class)
// 2)Using the derived keyword "ob.derived1::i"
#include<iostream>
using namespace std;
class Base
{
    public:int i;
};

//class derived1:virtual public base
class derived1:public Base
{
    public:int j;
};

//class derived2:virtual public base
class derived2:public Base
{
    public:int k;
};

class derived3:public derived1,public derived2
{
    public:int sum;
};
int main()
{
    derived3 ob;
    //ob.i=10;//Ambigous Statement(compiler doesnt know which copy of base class)
    //ob.derived1::i=10;
    ob.j=20;
    ob.k=30;
    //ob.sum=ob.derived1::i;
    ob.sum=ob.j+ob.k;
    cout<<ob.sum<<endl;
}

/*both derived1 and derived2 inherites the base class
and derived3 inherites both derived1 and derived2 classes
hence 2 copies of base class are present in a object of type derived3 

To remove the ambiguity
1) Use "::" to the data member 'i' and manually select either derived1 or derived2
  ob.derived1::i=10;
2) Use Virtual keyword while inheriting the base class to derived1 and derived2*/