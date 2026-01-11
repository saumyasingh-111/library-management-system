#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    string author;
    bool isIssued;

public:
    Book(int id, string t, string a) {
        bookId = id;
        title = t;
        author = a;
        isIssued = false;
    }

    int getBookId() {
        return bookId;
    }

    bool getStatus() {
        return isIssued;
    }

    void issueBook() {
        isIssued = true;
    }

    void returnBook() {
        isIssued = false;
    }

    void displayBook() {
        cout << "ID: " << bookId
             << " | Title: " << title
             << " | Author: " << author
             << " | Status: " << (isIssued ? "Issued" : "Available")
             << endl;
    }
};

#endif
