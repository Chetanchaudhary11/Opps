#include<iostream>
using namespace std;

inline double multiply(double a, double b){
    return a * b;
}

inline double cube(double num){
    return num*num*num;
}

int main(){
    double num1, num2;
    cout<<"Enter two numbers for multiplication: ";
    cin>>num1>>num2;
    double resultMultiply = multiply(num1, num2);
    cout<<"Multiplication= "<<resultMultiply<<endl;

    double n;
    cout<<"Enter a number to find its cubic value: ";
    cin>>n;
    double resultCube = cube(n);
    cout<<"Cubic value= "<<resultCube<<endl;

    return 0;
}