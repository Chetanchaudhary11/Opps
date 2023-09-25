#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    string lecturer_name;
    string subject_name;
    string course_name;
    int total_lectures;

public:
    Lecture() {
        lecturer_name = "";
        subject_name = "";
        course_name = "";
        total_lectures = 0;
    }
    void assign_initial_values(string lecturer, string subject, string course) {
        lecturer_name = lecturer;
        subject_name = subject;
        course_name = course;
        total_lectures = 0;
    }
    void add_lecture_details() {
        int lectures_taught;
        cout << "Enter the number of lectures taught by " << lecturer_name << ": ";
        cin >> lectures_taught;

        if (lectures_taught < 0) {
            cout << "Invalid input. Number of lectures cannot be negative." << endl;
        } else {
            total_lectures += lectures_taught;
            cout << "Lecture details added successfully for " << lecturer_name << "." << endl;
        }
    }
    void display_lecture_details() {
        cout << "Lecturer Name: " << lecturer_name << endl;
        cout << "Subject Name: " << subject_name << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Total Lectures Taught: " << total_lectures << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    Lecture lecturers[1];
    for (int i = 0; i < 1; i++) {
        string lecturer_name, subject_name, course_name;
        cout << "Enter name of lecturer " << i + 1 << ": ";
        cin >> lecturer_name;
        cout << "Enter subject name for " << lecturer_name << ": ";
        cin >> subject_name;
        cout << "Enter course name for " << lecturer_name << ": ";
        cin >> course_name;

        lecturers[i].assign_initial_values(lecturer_name, subject_name, course_name);
        lecturers[i].add_lecture_details();
    }
    cout << "\nLecture Details:" << endl;
    for (int i = 0; i < 1; i++) {
        lecturers[i].display_lecture_details();
    }

    return 0;
}
