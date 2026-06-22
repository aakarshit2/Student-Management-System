#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User {
private:
    string name;
    string batch;

    struct SubjectRecord {
        string subject;
        int subjectMarks;
        int attendance;
        int teacherId;
    };

    SubjectRecord records[50];  
    int recordCount;
    static int totalStudents;

public:
    Student(int id, string name, string batch);

    string getName();
    string getBatch();

    void setData(string sub, int m, int a, int tid);
    void showData();

    static int getTotalStudents();

    void menu() override;
};

#endif