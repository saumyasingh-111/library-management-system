#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User {
private:
    int issuedBooks;

public:
    Student(int id, string n) : User(id, n) {
        issuedBooks = 0;
    }

    bool canIssueBook() {
        return issuedBooks < 3;
    }

    void issueBook() {
        issuedBooks++;
    }

    void returnBook() {
        issuedBooks--;
    }

    void displayUser() override {
        cout << "Student ID: " << userId
             << " | Name: " << name
             << " | Issued Books: " << issuedBooks << endl;
    }
};

#endif
