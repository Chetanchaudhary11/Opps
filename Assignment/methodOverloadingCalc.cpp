#include<iostream>
using namespace std;

class Calculator {
    public:
    double calculate(double x, double y){
        return x + y;
    }

    double calculate(double x, double y, char operation){
        if(operation == '-'){
            return x-y;
        }
        cout<<"Unsupported operation."<<endl;
        return 0;
    }

    double calculate(double x, double y, int multiplier){
        return x*y*multiplier;
    }

    double calculate(double x, double y, bool safeDivision){
        if(safeDivision && y == 0){
            cout<<"Cannot divide by zero."<<endl;
            return 0;
        }
        return x / y;
    }
};
int main(){
    Calculator myCalc;

    double num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Addition= "<<myCalc.calculate(num1,num2)<<endl;
    cout<<"Subtraction = "<<myCalc.calculate(num1,num2,'-')<<endl;
    cout<<"Multiplication = "<<myCalc.calculate(num1, num2, 2)<<endl;
    cout<<"Division= "<<myCalc.calculate(num1, num2, true)<<endl;

    return 0;
}