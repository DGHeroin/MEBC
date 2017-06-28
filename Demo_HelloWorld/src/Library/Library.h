#ifndef LIBRARY_H
#define LIBRARY_H

#include "mebc.h"
#include "LibraryBookcase.h"

class Library : public IEntity
{
public:
    Library();

    void AddBook(Book *book);
    Book* GetBook(std::string id);
private:
    LibraryBookcase m_bookCase;
};


#endif // LIBRARY_H
