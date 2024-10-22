/*Develop a C++ program using classes for a bank empolyee to print name of the employee, account_no. & balance.
Print invalid balance if amount<500, Display the same, also display the balance after withdraw and
deposit.*/

#include<iostream>
using namespace std;
class BankEmployee
{
    private:
    string name;
    int account_no;
    float balance;
    public:
    void input()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Account No. : ";
        cin>>account_no;
        cout<<"Enter Balance : ";
        cin>>balance;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<account_no<<endl;
        if(balance>500)
            cout<<"Balance: "<<balance<<endl;
        else
            cout<<"Invalid balance(less than 500)"<<endl;
    }
    void withdraw(float amount)
    {
        cout<<"Available Balance : "<<balance<<endl;
        if(balance<=500)
        {
            cout<<"Invalid balance(less than 500)"<<endl;
        }
        else
        {   
            if(amount<=balance)
            {
                balance=balance-amount;
                cout<<"Balance after withdrawal: "<<balance<<endl;
            }
            else
            {
                cout<<"Insufficient balance"<<endl;
            }
        }
    }
    void deposit(float amount)
    {
        balance=balance+amount;
        cout<<"Balance after deposit: "<<balance<<endl;
    }
};
int main()
{
    BankEmployee emp;
    emp.input();
    int ch;
    while(1)
    {
        cout<<"\n1.Display\n2.Withdraw\n3.Deposit\n4.exit"<<endl;
        cout<<"choose an option : ";
        cin>>ch;
        if(ch==1)
            emp.display();
        else if(ch==2)
        {
            float amount;
            cout<<"Enter amount to withdraw : ";
            cin>>amount;
            emp.withdraw(amount);
        }
        else if (ch==3)
        {
            float amount;
            cout<<"Enter amount to deposit : ";
            cin>>amount;
            emp.deposit(amount);

        }
        else if (ch==4)
        {
            cout<<"Exiting the program"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid choice"<<endl;
            continue;
        }
    }
}