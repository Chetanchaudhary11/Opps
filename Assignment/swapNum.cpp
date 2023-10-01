#include<iostream>
using namespace std;

class NumberSwapper{
    private:
    int num1;
    int num2;

    public:
    NumberSwapper(int a, int b) : num1(a), num2(b){
        ////This constructor sets the initial values of num1 and num2 using the member initializer list.
    }
    
    friend void swapNumbers(NumberSwapper &ns);  // & symbol indicates that it's a reference parameter

    void displayNumbers(){
        cout<<"After swapping: num1= "<<num1<<", num2= "<<num2<<endl;
    }
};
void swapNumbers(NumberSwapper &ns){  //friend function for swapping
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}
int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    NumberSwapper ns(n1, n2);

    cout<<"Before swapping: num1= "<<n1<<", num2= "<<n2<<endl;

    swapNumbers(ns);

    ns.displayNumbers();

    return 0;
}