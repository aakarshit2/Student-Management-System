#ifndef ADMIN_H
#define ADMIN_H

#include "Teacher.h"

class Admin : public User {
private:
    Teacher* teacher;

public:
    Admin(Teacher* t);
    void menu() override;
};

#endif