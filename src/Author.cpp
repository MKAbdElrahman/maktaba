#include "../include/Author.hpp"

std::string Author::getName() const
{
    return name;
}

int Author::getID() const
{
    return id;
}

std::vector<Book> Author::getBooks() const
{
    return books;
}

std::vector<Book> Author::addBook(const Book &book)
{
    books.push_back(book);
    return books;
}