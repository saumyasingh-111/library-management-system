#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <vector>
#include "Book.h"

class Librarian {
public:
    void addBook(vector<Book> &books, Book b) {
        books.push_back(b);
        cout << "Book added successfully.\n";
    }

    void displayAllBooks(vector<Book> &books) {
        for (auto &b : books) {
            b.displayBook();
        }
    }
};

#endif
