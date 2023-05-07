#include <gtest/gtest.h>
#include "../include/Book.hpp"
#include "../include/Author.hpp"

class BookTestFixture : public ::testing::Test {
protected:
    Author author1{"Mohamed Kamal", 1};
    Author author2{"Ali Tamer", 2};
    Book book{"Test-Driven Development: By Example", "Addison-Wesley Professional", 2003};
};

TEST_F(BookTestFixture, getTitle) {
    EXPECT_EQ(book.getTitle(), "Test-Driven Development: By Example");
}

TEST_F(BookTestFixture, getPublisher) {
    EXPECT_EQ(book.getPublisher(), "Addison-Wesley Professional");
}

TEST_F(BookTestFixture, getYear) {
    EXPECT_EQ(book.getYear(), 2003);
}

