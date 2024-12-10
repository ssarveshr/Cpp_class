<<<<<<< HEAD
/*we can create a general class that defines proeprties common to a set of related items
=======
/*we can creat a general class that defines proeprties common to a set of related items
>>>>>>> 081ec9536d2261c91d746698b7c096d4e16cfb53
  class that is inherited is class the base class and a class that is inheriting the
  members of another class is called the derivied class
  BASE CLASS access controll
  class derived_class_name : access base_class name
  {
   code 
   } 
  the base class access specifier must be either public private or protroted if no 
  access specifier is present the defualt will be private for the class
  */

#include<iostream>
using namespace std;
class base
{
    int i,j;
    public: void set(int a,int b)
            {
                i=a;
                j=b;
            }
            void show()
            {
                cout<<i<<endl;
                cout<<j<<endl;
            }
};
class derived:public base
{
    int k;
    public: derived(int x)
            {
                k=x;
            }
            void showk()
            {
                cout<<k<<endl;
            }
};
int main()
{
    derived ob(3);
    ob.set(1,2);
    ob.show();
    ob.showk();
    return 0;
}