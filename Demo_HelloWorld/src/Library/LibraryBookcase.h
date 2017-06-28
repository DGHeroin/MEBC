#ifndef LIBRARY_BOOKCASE_H
#define LIBRARY_BOOKCASE_H

#include "mebc.h"

#include "Book.h"
#include <list>

/**
 * @brief      Class for library bookcase.
 */
class LibraryBookcase : public IComponent
{
public:
    /**
     * @brief      { ctor }
     */
    LibraryBookcase();

    /**
     * { Book's Pool }
     */
    std::list<Book*> bookPool;
};

#endif // LIBRARY_BOOKCASE_H
