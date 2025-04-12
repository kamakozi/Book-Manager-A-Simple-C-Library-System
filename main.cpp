#include <vector>
#include "Book.h"
#include <iostream>

using namespace std;

std::vector<Book>books;

Book createBookFromInput() {
    std::string title,author;
    int pages;

    cout << "Enter book name: ";
    cin.ignore();
    getline(cin,title);
    if (title.empty()) {
        cout << "Book title can't be empty!" << endl;
    }

    cout << "Enter author: ";
    getline(cin,author);
    if (author.empty()) {
        cout<< "Author can't be empty!" << endl;
    }

    cout << "Enter pages: ";
    cin >> pages;
    if (pages< 1) {
        cout << "Book can't have less pages than 1!" << endl;
    }

       return Book(title,author,pages,false);

}

void removeBook() {
    for (int i = 0; i < books.size();i++) {
        cout << "Title: " << books[i].getTitle() << " || Author: " << books[i].getAuthor() << " || Pages: " << books[i].getPages() << " || Read: " << books[i].getIsRead() << endl;
    }
    std::string removeTitle;
    cout << "Type book title to remove it!\nSelect: ";
    cin.ignore();
    getline(cin,removeTitle);
    for (int i = 0; i < books.size();i++) {
        if (removeTitle == books[i].getTitle()) {
            books.erase(books.begin() + i);
            cout << "Book removed!" << endl;
            break;
        }

    }
}

void getBooks() {
    if (books.size() == 0) {
        cout << "No books inside!" << endl;
    }
    for (int i = 0; i < books.size();i++) {
        cout << "Title: " << books[i].getTitle() << " || Author: " << books[i].getAuthor() << " || Pages: " << books[i].getPages() << " || Read: " << books[i].getIsRead() << endl;
    }
}

void markBookAsRead() {
    for (int i = 0; i < books.size();i++) {
        cout << "Title: " << books[i].getTitle() << " || Author: " << books[i].getAuthor() << " || Pages: " << books[i].getPages() << " || Read: " << books[i].getIsRead() << endl;
    }

    std::string markRead;
    cout << "Type book title to mark is as read!\nSelect: ";
    cin.ignore();
    getline(cin,markRead);

    for (int i = 0; i < books.size();i++) {
        if (markRead == books[i].getTitle()) {
           books[i].markAsRead();
            cout << "Book marked as read" << endl;
        }
    }

}

int main() {
    cout << "Book manager" << endl;

    int chooser{0};

    while (chooser != 5) {
        cout << "\n1.Add new book\n2.View all books\n3.Remove book\n4.Read book\n5.Quit\nSelect: ";
        cin >> chooser;
        switch (chooser) {
            case 1:{
                Book newBook = createBookFromInput();
                books.push_back(newBook);
                cout << "Book created!" << endl;
            break;
            }
            case 2:
                getBooks();
            break;
            case 3:
                removeBook();
            break;
            case 4:
                markBookAsRead();
            break;
            case 5:
                cout << "Exeting..." << endl;
                break;

        }
    }
}