#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    bool isBorrowed;

public:
    Book(std::string t, std::string a) : title(t), author(a), isBorrowed(false) {}

    void borrowBook() {
        if (!isBorrowed) {
            isBorrowed = true;
            std::cout << "Book borrowed.\n";
        } else {
            std::cout << "Book is already borrowed.\n";
        }
    }

    void returnBook() {
        if (isBorrowed) {
            isBorrowed = false;
            std::cout << "Book returned.\n";
        } else {
            std::cout << "Book was not borrowed.\n";
        }
    }

    void display() const {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nBorrowed: " << (isBorrowed ? "Yes" : "No") << "\n";
    }
};

int main() {
    Book b("1984", "George Orwell");
    b.display();
    b.borrowBook();
    b.display();
    b.returnBook();
    b.display();
    return 0;
}

