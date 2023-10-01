#include<iostream>
using namespace std;

template <class T>
void swapping(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
main(){
    char a='A', b='B';
    int x=10, y=20;

    cout<<"Before swapping: a= "<<a<<" b="<<b<<endl;
    swapping(a,b);
    cout<<"After swapping: a= "<<a<<" b="<<b<<endl;

    cout<<"Before swapping: x= "<<x<<" y="<<y<<endl;
    swapping(x,y);
    cout<<"After swapping: x= "<<x<<" y="<<y<<endl;
}