#include "Library.h"

Library::Library() :
    IEntity()
{
}

void Library::AddBook(Book* book) {
    m_bookCase.bookPool.push_back(book);
}

Book* Library::GetBook(std::string id) {
    for(Book *book : m_bookCase.bookPool) {
        if(book != nullptr && book->ID == id) {
            return book;
        }
    }
    return nullptr;
}