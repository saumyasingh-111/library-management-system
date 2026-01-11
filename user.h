#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User {
protected:
    int userId;
    string name;

public:
    User(int id, string n) {
        userId = id;
        name = n;
    }

    virtual void displayUser() {
        cout << "User ID: " << userId
             << " | Name: " << name << endl;
    }
};

#endif
