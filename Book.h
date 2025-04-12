//
// Created by ziga zoric on 12.04.25.
//

#include <string>
#include <vector>

#ifndef BOOK_H
#define BOOK_H





class Book {

private:
    std::string title;
    std::string author;
    bool isRead;
    int pages;

public:

    Book(std::string t, std::string a,int p,bool read);
    int getPages() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getIsRead() const;
    void markAsRead();


};



#endif //BOOK_H
