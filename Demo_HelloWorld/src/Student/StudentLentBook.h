#ifndef STUDENT_LENT_BOOK_H
#define STUDENT_LENT_BOOK_H

#include "mebc.h"
#include "Common/Book.h"

class StudentLentBook : public IBehaviour
{
public:
    Book* Lend(std::string id);
};

#endif // STUDENT_LENT_BOOK_H
