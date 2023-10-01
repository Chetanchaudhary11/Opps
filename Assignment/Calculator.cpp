#include<iostream>
using namespace std;

class Calculator {
    public:
    int add(int num1, int num2){
        return num1 + num2;
    }
    int subtract(int num1, int num2){
        return num1 - num2;
    }
    int multiply(int num1, int num2){
        return num1 * num2;
    }
    float divide(int num1, int num2){
        if(num2 == 0){
            cout<<"Error: Division by zero!"<<endl;
            return 0.0;
        }
        return static_cast<float>(num1)/num2;
    }
};
int main(){
    Calculator calc;
    int num1, num2;
    char operation;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter operator(+, -, *, /): ";
    cin>>operation;
    cout<<"Enter Second number: ";
    cin>>num2;

    switch(operation){
        case '+':
        cout<<"Addition= "<<calc.add(num1, num2)<<endl;
        break;
        case '-':
        cout<<"Subtraction= "<<calc.subtract(num1, num2)<<endl;
        break;
        case '*':
        cout<<"Multiplication= "<<calc.multiply(num1, num2)<<endl;
        break;
        case '/':
        cout<<"Division= "<<calc.divide(num1, num2)<<endl;
        break;
        
        default:
        cout<<"Invalid Operator!"<<endl;
        break;
    }
    return 0;
}