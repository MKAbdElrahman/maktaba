#include <gtest/gtest.h>
#include "../include/Author.hpp"
#include "../include/Book.hpp"

class AuthorTestFixture : public ::testing::Test {
protected:
    Author author{"Mohamed Kamal", 1};
    Book book1{"Test-Driven Development: By Example", "Addison-Wesley Professional", 2003};
    Book book2{"Refactoring: Improving the Design of Existing Code", "Addison-Wesley Professional", 1999};
};

TEST_F(AuthorTestFixture, GetName) {
    EXPECT_EQ(author.getName(), "Mohamed Kamal");
}

TEST_F(AuthorTestFixture, GetID) {
    EXPECT_EQ(author.getID(), 1);
}

TEST_F(AuthorTestFixture, GetBooks) {
    author.addBook(book1);
    author.addBook(book2);
    EXPECT_EQ(author.getBooks().size(), 2);
    EXPECT_EQ(author.getBooks()[0].getTitle(), "Test-Driven Development: By Example");
    EXPECT_EQ(author.getBooks()[1].getTitle(), "Refactoring: Improving the Design of Existing Code");
}
