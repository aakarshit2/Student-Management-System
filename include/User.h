#ifndef USER_H
#define USER_H

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class User {
protected:
    int id;
    string password;

public:
    User(int id, string pass);
    int getId() const;
    virtual void menu() = 0;
    bool login(string pass);
};

#endif