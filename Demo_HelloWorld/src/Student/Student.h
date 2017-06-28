#ifndef STUDENT_H
#define STUDENT_H

#include "mebc.h"
#include "Common/Book.h"
#include <list>

/**
 * @brief      Class for student.
 */
class Student : public IEntity {
public:
    /**
     * @brief      { function_description }
     *
     * @param[in]  name  The name
     */
    Student(std::string name);

    /**
     * @brief      { function_description }
     *
     * @param[in]  id    The identifier
     */
    void NeedToRead(std::string id);
private:
    /**
     * { item_description }
     */
    std::string m_name;
};

#endif // STUDENT_H
