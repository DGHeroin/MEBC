#ifndef STUDENT_LENT_BOOK_H
#define STUDENT_LENT_BOOK_H

#include "mebc.h"
#include "Common/Book.h"

/**
 * @brief      Class for student lent book.
 */
class StudentLentBook : public IBehaviour
{
public:
    /**
     * @brief      { function_description }
     *
     * @param[in]  id    The identifier
     *
     * @return     { description_of_the_return_value }
     */
    Book* Lend(std::string id);
};

#endif // STUDENT_LENT_BOOK_H
