#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    void inputData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
    void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student{
    protected:
    float percentage;

    public:
    void readStudentData(){
        cout<<"Enter percentage: ";
        cin>>percentage;
    }
    void displayStudentData(){
        cout<<"Percentage: "<<percentage<<"%"<<endl;
    }
};
class Teacher : public Person, public Student {
    private:
    float salary;

    public:
    void readTeacherData(){
        inputData(); //call base class method to initialize person data
        readStudentData(); //call base class method to read student data
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void displayTeacherData(){
        displayData();  //call base class method to display person data
        displayStudentData(); //call base class method to display student data
        cout<<"Salary: Rs."<<salary<<endl;
    }
};
int main(){
    Teacher myTeach;

    cout<<"Enter Teacher's Information: "<<endl;
    myTeach.readTeacherData();

    cout<<"\nTeacher's Information: "<<endl;
    myTeach.displayTeacherData();

    return 0;
}