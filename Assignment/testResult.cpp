#include<iostream>
using namespace std;

class Students {
    protected:
    int rollNumber;

    public:
    void inputRollNumber(){
        cout<<"Enter Roll Number: ";
        cin>>rollNumber;
    }
};
class Test : public Students{
    protected:
    int sub1Marks;
    int sub2Marks;

    public:
    void inputTestMarks(){
        cout<<"Enter Marks for Subject 1: ";
        cin>>sub1Marks;
        cout<<"Enter Marks for Subject 2: ";
        cin>>sub2Marks;
    }
    int getTotalMarks(){
        return sub1Marks + sub2Marks;
    }
};
class Result : public Test {
    public:
    void displayResult(){
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Subject 1 Marks: "<<sub1Marks<<endl;
        cout<<"Subject 2 Marks: "<<sub2Marks<<endl;
        cout<<"Total Marks: "<<getTotalMarks()<<endl;
    }
};
int main(){
    Result myResult;

    cout<<"Enter Student Details: "<<endl;
    myResult.inputRollNumber();
    myResult.inputTestMarks();

    cout<<"\nStudent Result: "<<endl;
    myResult.displayResult();

    return 0;
}