#include "Student.h"
using namespace std;

int Student::totalStudents = 0;

Student::Student(int id, string name, string batch) : User(id, "student") {
    this->name = name;
    this->batch = batch;
    recordCount = 0;
    totalStudents++;
}

string Student::getName()  { return name; }
string Student::getBatch() { return batch; }

void Student::setData(string sub, int m, int a, int tid) {
    if (recordCount < 50)
        records[recordCount++] = {sub, m, a, tid};
    else
        cout << "Record limit reached!\n";
}

void Student::showData() {
    if (recordCount == 0) {
        cout << "No subject data available.\n";
        return;
    }

    for (int i = 0; i < recordCount; i++) {
        cout << "------------------\n";
        cout << "Subject: " << records[i].subject << endl;
        cout << "Marks: " << records[i].subjectMarks << endl;
        cout << "Attendance: " << records[i].attendance << "%\n";
        cout << "Teacher ID: " << records[i].teacherId << endl;
        
    }
}

int Student::getTotalStudents() {
    return totalStudents;
}

void Student::menu() {
    int choice;
    do {
        cout << "\n--- STUDENT MENU ---\n";
        cout << "1. View Subject Details\n2. Exit\n";
        cout << "=====================\n";
        cout << "Choice: ";
        cin >> choice;
        cout << "=====================\n";

        switch (choice) {
            case 1:
                if (recordCount == 0) {
                    cout << "No subject data available.\n";
                } else {
                    for (int i = 0; i < recordCount; i++) {
                        cout << "\nSubject: " << records[i].subject << endl;
                        cout << "Marks: " << records[i].subjectMarks << endl;
                        cout << "Attendance: " << records[i].attendance << "%\n";
                        cout << "Teacher ID: " << records[i].teacherId << endl;
                    }
                }
                break;
            case 2:
                cout << "Returning to Login Menu...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 2);
}