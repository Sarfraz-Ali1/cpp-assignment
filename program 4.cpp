#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    int bookID;
    string bookName;
    float price;

public:
    // Default constructor
    Book() : bookID(0), bookName(""), price(0.0) {}

    // Constructor with parameters
    Book(int id, string name, float pr) : bookID(id), bookName(name), price(pr) {}

    // Member functions to input and display attributes
    void inputBook() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, bookName);
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayBook() {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Price: " << price << endl;
    }
};

class Writer {
private:
    string writerName;
    string address;
    int numBooksWritten;
    Book books[5]; // Array of Book objects

public:
    // Constructor
    Writer(string name, string addr) : writerName(name), address(addr), numBooksWritten(0) {}

    // Member functions to input and display attributes
    void inputWriter() {
        cout << "Enter Writer Name: ";
        cin.ignore();
        getline(cin, writerName);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Number of Books Written: ";
        cin >> numBooksWritten;

        cout << "Enter details of each book:" << endl;
        for (int i = 0; i < numBooksWritten; ++i) {
            cout << "Book " << i + 1 << ":" << endl;
            books[i].inputBook();
        }
    }

    void displayWriter() {
        cout << "Writer Name: " << writerName << endl;
        cout << "Address: " << address << endl;
        cout << "Number of Books Written: " << numBooksWritten << endl;
        cout << "Books Written:" << endl;
        for (int i = 0; i < numBooksWritten; ++i) {
            cout << "Book " << i + 1 << ":" << endl;
            books[i].displayBook();
        }
    }
};

int main() {
    Writer writer1("John Doe", "123 Main Street");
    writer1.inputWriter();
    cout << "\nWriter Details:" << endl;
    writer1.displayWriter();

    return 0;
}
