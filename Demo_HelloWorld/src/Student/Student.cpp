#include "Student.h"
#include <iostream>
using namespace std;

#include "StudentLentBook.h"

/**
 * @brief      Constructs the object.
 *
 * @param[in]  name  The name
 */
Student::Student(std::string name) {
    m_name = name;
}

/**
 * @brief      { function_description }
 *
 * @param[in]  id    The identifier
 */
void Student::NeedToRead(std::string id) {
    StudentLentBook *lentBook = GetBehaviour<StudentLentBook>();
    if (lentBook) {
        Book* book = lentBook->Lend(id);
        if (book) {
            cout << m_name << ": Book Found. ID: (" << id << ") Name :(" << book->bookName << ")." << endl;
        } else  {
            cout << m_name << ": Book (" << id << ") Not Found." << endl;
        }
    } else {
        cout << m_name << ": I don't know how to rend a book" << endl;
    }
}