#include<iostream>
using namespace std;

class account
{
    // Data and Data members
    public:
        char name[100];
        int age;
        char id[100];
        char add[50];
        int amount;
    public:
    void create_account()
    {
        cout<<"\nEnter your name: ";
        cin.ignore();
        cin.getline(name,100);
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter E-mail ID: ";
        cin.ignore();
        cin.getline(id,100);
        cout<<"Enter your residential address: ";
        cin.ignore();
        cin.getline(add,50);
        cout<<"Enter amount to be deposited: ";
        cin>>amount;
        cout<<"\n\n Your account has been successfully created...!";
    }
    void chk_bal()
    {
        cout<<"\nAccount Holder Name: "<<name;
        cout<<"\nAccount Holder Email ID: "<<id;
        cout<<"\nBalance in your account: "<<amount;
    }
    void withdraw()
    {
        int dep;
        cout<<"\nEnter Amount you want to withdraw: ";
        cin>>dep;
        amount -= dep;
        cout<<"\n\nAmount is successfully withdrawn from your account...!";
    }
    void deposit()
    {
        int amt;
        cout<<"\nEnter Amount to be Deposited: ";
        cin>>amt;
        amount += amt;
        cout<<"\n\nAmount is successfully deposited in your account...!";
    }
};

int main()
{
    account obj;
    int choice;
    int x;
    cout<<"\t\t\t\t\t\tSassy Six Bank\t\t\t\t\t \n\n";
    cout<<"Welcome to our net banking system...!\n";
    do{
    cout<<" 1.Create an Account.\n 2.Check Balance.\n 3.To withdraw money.\n 4.To deposit money.\n 5.Exit \nPlease Enter Your Choice\t";
    cin>>choice;
    switch (choice)
    {
    case 1:
        obj.create_account();
        break;
    case 2:
        obj.chk_bal();
        break;
    case 3:
        obj.withdraw();
        break;
    case 4:
        obj.deposit();
        break;
    case 5:
        if(choice==5)
        {
            exit(1);
        }
        
    default:
        cout<<"\nEnter an valid input.!";
    }
    cout<<"\n\n\tTo continue, press 8. To sign out, press 9\t";
    cin>>x;
    if(x==9)
        exit(0);
    }while (x==8);
    
}
