#ifndef BOOK_H
#define BOOK_H

#include "mebc.h"
#include <string>

/**
 * @brief      Class for book.
 */
class Book : public IComponent {
public:
    /**
     * { Book's ID }
     */
    std::string ID;

    /**
     * { Book's Name }
     */
    std::string bookName;

    /**
     * { Book's category }
     */
    std::string category;

    /**
     * @brief      { ctor }
     *
     * @param[in]  id        The identifier
     * @param[in]  name      The name
     * @param[in]  category  The category
     */
    Book(std::string id, std::string name, std::string category);
};

#endif // BOOK_H
