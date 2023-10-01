#include<iostream>
#include<cmath>
using namespace std;

class Area {
    public:
    double calculate(double length, double breadth){
        return length * breadth;
    }
    double calculate(double base, double height, char flag){
        if(flag == 'T' || flag == 't'){
            return 0.5 * base * height;
        }else{
            cerr<<"Invalid flag for triangle Calculation!"<<endl;
            return 0.0;
        }
    }
    double calculate(double radius, char flag1, char flag2){
        if(flag1 == 'C' || flag1 == 'c'){
            if(flag2 == 'I' || flag2 == 'i'){
                return 3.14 * radius *radius;
            }else{
                cerr<<"Invalid flag for circle calculation!"<<endl;
                return 0.0;
            }
        }else{
            cerr<<"Invalid falg for circle calculation!"<<endl;
            return 0.0;
        }
    }
};
int main(){
    Area mycalc;
    double length, breadth, base, height, radius;
    char choice, unit;

    cout<<"Choose a shape to calculate its area: "<<endl;
    cout<<"R-Rectangle"<<endl;
    cout<<"T-Triangle"<<endl;
    cout<<"C-Circle"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 'R':
        case 'r':
        cout<<"Enter length and breadth of the rectangle: ";
        cin>>length>>breadth;
        cout<<"Area of the rectangle: "<<mycalc.calculate(length, breadth)<<endl;
        break;

        case 'T':
        case 't':
        cout<<"Enter base and height of the triangle: ";
        cin>>base>>height;
        cout<<"Area of the triangle: "<<mycalc.calculate(base, height, choice)<<endl;
        break;

        case 'C':
        case 'c':
        cout<<"Enter radius of the circle: ";
        cin>>radius;
        cout<<"Use 'I' for calculating area in inches or any other character for square units:";
        cin>>unit;
        cout<<"Area of the circle: "<<mycalc.calculate(radius, choice, unit)<<endl;
        break;

        default:
        cerr<<"Invalid choice!"<<endl;
        break;
    }
    return 0;
}