#include "Teacher.h"
using namespace std;

Teacher::Teacher(int id) : User(id, "teacher") {
    studentCount = 0;
}

void Teacher::setSubject(string sub) {
    subject = sub;
}

void Teacher::setTeacherId(int tid) {
    id = tid;
}

void Teacher::addStudent() {
    int sid;
    string name, batch;

    cout << "Enter Student ID: ";
    cin >> sid;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Batch: ";
    getline(cin, batch);

    if (studentCount < 100) {
        students[studentCount++] = new Student(sid, name, batch);
        cout << "Student added successfully!\n";
    } else {
        cout << "Student limit reached!\n";
    }
}

void Teacher::addMarks() {
    int sid, marks, attendance;
    cout << "Enter Student ID: ";
    cin >> sid;

    for (int i = 0; i < studentCount; i++) {
        if (students[i]->getId() == sid) {
            cout << "Enter Marks: ";
            cin >> marks;
            cout << "Enter Attendance: ";
            cin >> attendance;

            students[i]->setData(subject, marks, attendance, this->id);

            cout << "Data updated!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

void Teacher::viewStudents() {
    cout << "\n--- STUDENT LIST ---\n"<< endl;
    if (studentCount == 0) {
        cout << "No students added yet.\n";
        return;
    }
    cout << "Total Students: " << Student::getTotalStudents() << endl;

    for (int i = 0; i < studentCount; i++) {
        cout << "\nID: " << students[i]->getId()
             << " | Name: " << students[i]->getName()
             << " | Batch: " << students[i]->getBatch() << endl;
    }
}

void Teacher::menu() {
    int choice;
    do {
        cout << "\n--- TEACHER MENU ---\n";
        cout << "1. Add Student\n2. Add Subject Marks & Attendance\n3. View Students\n4. Exit\n";
        cout << "=====================\n";
        cout << "Choice: ";
        cin >> choice;
        cout << "=====================\n";

        switch (choice) {
            case 1: addStudent(); break;
            case 2: addMarks(); break;
            case 3: viewStudents(); break;
            case 4: cout << "Returning to Login Menu...\n"; break;
            default: cout << "Invalid Choice!\n";
        }
    } while (choice != 4);
}

Student** Teacher::getStudents() { return students; }
int Teacher::getStudentCount() { return studentCount; }

string Teacher::getSubject() const { return subject; }
int Teacher::getTeacherId() const { return id; }