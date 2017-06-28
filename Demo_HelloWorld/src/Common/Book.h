#ifndef BOOK_H
#define BOOK_H

#include "mebc.h"
#include <string>

class Book : public IComponent {
public:
    std::string ID;
    std::string bookName;
    std::string category;

    Book(std::string id, std::string name, std::string category);
};

#endif // BOOK_H
