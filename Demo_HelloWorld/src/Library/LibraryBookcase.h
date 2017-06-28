#ifndef LIBRARY_BOOKCASE_H
#define LIBRARY_BOOKCASE_H

#include "mebc.h"

#include "Book.h"
#include <list>

class LibraryBookcase : public IComponent
{
public:
    LibraryBookcase();
    std::list<Book*> bookPool;
};

#endif // LIBRARY_BOOKCASE_H
