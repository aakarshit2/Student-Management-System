#ifndef TEACHER_H
#define TEACHER_H

#include "Student.h"
#include "User.h"
class Teacher : public User {
private:
    Student* students[100];   
    int studentCount;
    string subject;

public:
    Teacher(int id);

    void setSubject(string sub);
    void setTeacherId(int tid);

    void addStudent();
    void addMarks();
    void viewStudents();

    void menu() override;

    Student** getStudents();
    int getStudentCount();

    string getSubject() const;
    int getTeacherId() const;
};

#endif