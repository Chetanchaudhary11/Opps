#include<iostream>
using namespace std;

class Number{
    private:
    int num1, num2;

    public:
    void input(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    friend void find(Number &num);
};
void find(Number &num){
    if(num.num1 > num.num2){
        cout<<"Largest is: "<<num.num1;
    }else{
        cout<<"Largest is: "<<num.num2;
    }
}
int main(){
    // int num1, num2;
    // cout<<"Enter two numbers: ";
    // cin>>num1>>num2;
    
    Number num;
    num.input();
    find(num);

    return 0;
}