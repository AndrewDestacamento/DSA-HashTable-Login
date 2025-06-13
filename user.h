#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    string username = "", passwordHash = "";
    bool isEmpty = true;
    int loginAttempts = 0;
    User() {}   // Allow empty constructor
    User(const string& u, const string& h) : username(u), passwordHash(h), isEmpty(false) {}

    // Reset to empty state
    void clear() {
        username = "";
        passwordHash = "";
        isEmpty = true;
        loginAttempts = 0;
    }
};

#endif
