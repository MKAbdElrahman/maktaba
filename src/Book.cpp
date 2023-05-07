#include "../include/Book.hpp"

Book::Book(std::string title, std::string publisher, int year)
    : title(title), publisher(publisher), year(year) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getPublisher() const {
    return publisher;
}

int Book::getYear() const {
    return year;
}

