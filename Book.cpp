#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

using std::endl;
using std::cin;
using std::cout;
using std::string;

Book::Book(std::string t, std::string a, int p,bool read) {
    title = t;
    author = a;
    pages = p;
    isRead = read;
}

int Book::getPages() const  {
    return pages;
}
std::string Book::getTitle() const {
    return title;
}
std::string Book::getAuthor() const {
    return author;
}
bool Book::getIsRead()const  {
    return isRead;
}
void Book::markAsRead() {
    isRead = true;
}










