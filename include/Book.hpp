#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(std::string title, std::string publisher, int year);

    std::string getTitle() const;
    std::string getPublisher() const;
    int getYear() const;
    

private:
    std::string title;
    std::string publisher;
    int year;
};

#endif
