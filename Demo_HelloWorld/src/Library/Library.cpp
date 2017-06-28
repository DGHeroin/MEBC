#include "Library.h"

/**
 * @brief      Constructs the object.
 */
Library::Library() :
    IEntity()
{
}

/**
 * @brief      Adds a book.
 *
 * @param      book  The book
 */
void Library::AddBook(Book* book) {
    m_bookCase.bookPool.push_back(book);
}

/**
 * @brief      Gets the book.
 *
 * @param[in]  id    The identifier
 *
 * @return     The book.
 */
Book* Library::GetBook(std::string id) {
    for(Book *book : m_bookCase.bookPool) {
        if(book != nullptr && book->ID == id) {
            return book;
        }
    }
    return nullptr;
}