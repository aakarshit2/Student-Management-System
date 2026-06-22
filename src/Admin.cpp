#include "Admin.h"
using namespace std;

Admin::Admin(Teacher* t) : User(999, "admin") {
    teacher = t;
}

void Admin::menu() {
    int choice;
    do {
        cout << "\n--- ADMIN MENU ---\n";
        cout << "1. View All Students Data\n";
        cout << "2. View All Teachers Data\n3. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student** students = teacher->getStudents();
                int count = teacher->getStudentCount();
                cout << "\n===== STUDENT DATA =====\n";

                for (int i = 0; i < count; i++) {
                    cout << "\n=====================\n";
                    cout << "Student ID: " << students[i]->getId() << endl;
                    cout << "Name: " << students[i]->getName() << endl;
                    cout << "Batch: " << students[i]->getBatch() << endl;

                    students[i]->showData();
                }
                break;
            }
            case 2:{
                int count = teacher->getStudentCount();
                cout << "\n===== TEACHER INFO =====\n";
                cout << "Teacher ID: " << teacher->getTeacherId() << endl;
                cout << "Subject: " << teacher->getSubject() << endl;
                break;
            }
            case 3:
                cout << "Returning to Login Menu...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 3);
}