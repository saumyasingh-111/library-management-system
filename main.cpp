#include <iostream>
#include <vector>

#include "Book.h"
#include "Student.h"
#include "Librarian.h"
#include "Transaction.h"

using namespace std;

int main() {
    vector<Book> books;
    Librarian lib;
    Student s1(101, "Saumya");

    lib.addBook(books, Book(1, "C++ Programming", "Bjarne"));
    lib.addBook(books, Book(2, "Data Structures", "Mark Allen"));

    cout << "\nAll Books:\n";
    lib.displayAllBooks(books);

    cout << "\nIssuing Book ID 1:\n";
    Transaction::issueBook(books, s1, 1);

    cout << "\nStudent Details:\n";
    s1.displayUser();

    cout << "\nReturning Book ID 1:\n";
    Transaction::returnBook(books, s1, 1);

    cout << "\nFinal Book Status:\n";
    lib.displayAllBooks(books);

    return 0;
}
