#include<iostream>
#include<string>
using namespace std;

class Cricketer {
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
class Batsman : public Cricketer{
    private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

    public:
    void inputData(){
        Cricketer :: inputData();  //Call base class method
        cout<<"Enter total runs: ";
        cin>>totalRuns;
        cout<<"Enter best performance: ";
        cin>>bestPerformance;
    }

    void calculateAverageRuns(){
        averageRuns = static_cast<float>(totalRuns) / 5; //assuming 5 matches
    }

    void displayData(){
        Cricketer :: displayData();  //Call base class method
        cout<<"Total Runs: "<<totalRuns<<endl;
        cout<<"Average Runs: "<<averageRuns<<endl;
        cout<<"Best Performance: "<<bestPerformance<<endl;
    }
};
int main(){
    Batsman mybat;

    cout<<"Enter Batsman's Information: "<<endl;
    mybat.inputData();
    mybat.calculateAverageRuns();

    cout<<"\nBatsman's Information: "<<endl;
    mybat.displayData();

    return 0;
}