#include "Admin.h"

int main() {
    int choice, id;
    string password;
    string subject;

    Teacher t(id);

    while (true) {
        try {
            cout << "\n==== LOGIN PAGE ====\n";
            cout << "1. Teacher\n2. Student\n3. Admin\n4. Exit\n";
            cout << "=====================\n";
            cout << "Choice: ";
            cin >> choice;
            cout << "=====================\n";

            if (choice == 4) {
                cout << "Exiting Program...\n";
                break;
            }

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Password: ";
            cin >> password;

            if (choice == 1) {
                cin.ignore();
                cout << "Enter Subject/Department: ";
                getline(cin, subject);

                t.setTeacherId(id);
                t.setSubject(subject);
                t.login(password);
                t.menu();
            }
            else if (choice == 2) {
                bool found = false;
                Student** students = t.getStudents();
                int count = t.getStudentCount();

                for (int i = 0; i < count; i++) {
                    if (students[i]->getId() == id) {
                        students[i]->login(password);
                        students[i]->menu();
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student not found!\n";
                }
            }
            else if (choice == 3) {
                Admin a(&t);
                if (password == "admin") {
                    a.menu();
                } else {
                    cout << "Invalid Admin Password!\n";
                }
            }
            else {
                throw invalid_argument("Invalid User Type!");
            }
        }
        catch (exception &e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    return 0;
}