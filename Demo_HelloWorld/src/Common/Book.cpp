#include "Book.h"

Book::Book(std::string id, std::string name, std::string category) :
    IComponent()
{
    ID       = id;
    bookName = name;
    category = category;
}