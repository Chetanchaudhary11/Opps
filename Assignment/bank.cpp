#include<iostream>
#include<string>
using namespace std;

class BankAccount {
    private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

    public:
    void details(string name, long accNum, string accType, double initialBalance){
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout<<"Deposit "<<amount<<" successfully. "<<endl;
        }else{
            cout<<"Invalid deposit amount. Please enter a positive amount."<<endl;
        }
    }
    void withdraw(double amount){
        if(amount > 0){
            if(balance >= amount){
                balance -= amount;
                cout<<"Withdraw "<<amount<<" successfully. "<<endl;
            }else{
                cout<<"Insufficient balance. Cannot withdraw."<<endl;
            }
        }else{
            cout<<"Invalid withdrawal amount. Please enter a positive amount."<<endl;
        }
    }
    void display(){
        cout<<"Account Details: "<<endl;
        cout<<"Depositor Name: "<<depositorName<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount myAccount;
    myAccount.details("Suraj Meena", 123456789, "Savings", 1000.0);
    myAccount.display();
    myAccount.deposit(500.00);
    myAccount.display();
    myAccount.withdraw(200.0);
    myAccount.display();

    return 0;
}