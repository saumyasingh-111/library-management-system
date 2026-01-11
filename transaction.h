#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Book.h"
#include "Student.h"
#include <vector>

class Transaction {
public:
    static void issueBook(vector<Book> &books, Student &s, int bookId) {
        for (auto &b : books) {
            if (b.getBookId() == bookId && !b.getStatus()) {
                if (!s.canIssueBook()) {
                    cout << "Book limit exceeded!\n";
                    return;
                }
                b.issueBook();
                s.issueBook();
                cout << "Book issued successfully.\n";
                return;
            }
        }
        cout << "Book not available.\n";
    }

    static void returnBook(vector<Book> &books, Student &s, int bookId) {
        for (auto &b : books) {
            if (b.getBookId() == bookId && b.getStatus()) {
                b.returnBook();
                s.returnBook();
                cout << "Book returned successfully.\n";
                return;
            }
        }
        cout << "Invalid return.\n";
    }
};

#endif
