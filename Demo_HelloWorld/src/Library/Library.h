#ifndef LIBRARY_H
#define LIBRARY_H

#include "mebc.h"
#include "LibraryBookcase.h"

/**
 * @brief      Class for library.
 */
class Library : public IEntity
{
public:
    /**
     * @brief      { function_description }
     */
    Library();

    /**
     * @brief      Adds a book.
     *
     * @param      book  The book
     */
    void AddBook(Book *book);

    /**
     * @brief      Gets the book.
     *
     * @param[in]  id    The identifier
     *
     * @return     The book.
     */
    Book* GetBook(std::string id);
private:
    /**
     * { BookCase }
     */
    LibraryBookcase m_bookCase;
};


#endif // LIBRARY_H
