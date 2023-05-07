
#include <iostream>
#include <vector>
#include "Book.hpp"

class Author
{
public:
    Author(std::string name, int id) : name(name), id(id)
    {}
    std::string getName() const;

    int getID() const;

    std::vector<Book> getBooks()const;
    std::vector<Book> addBook(const Book &book);

private:
    std::string name;
    std::vector<Book> books;
    int id;
};

