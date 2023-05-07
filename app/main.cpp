#include <iostream>
#include <string>
#include "../include/Author.hpp"

int main()
{
    Author MK = Author("Mohamed Kamal", 1);
    std::cout << MK.getName() << std::endl;
    return 0;
}