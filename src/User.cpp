#include "User.h"

User::User(int id, string pass) {
    this->id = id;
    this->password = pass;
}

int User::getId() const {
    return id;
}

bool User::login(string pass) {
    if (pass != password)
        throw runtime_error("Incorrect Password!");
    return true;
}