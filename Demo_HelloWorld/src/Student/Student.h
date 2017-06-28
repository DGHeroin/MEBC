#ifndef STUDENT_H
#define STUDENT_H

#include "mebc.h"
#include "Common/Book.h"
#include <list>

class Student : public IEntity {
public:
    Student(std::string name);
    void NeedToRead(std::string id);
private:
    std::string m_name;
};

#endif // STUDENT_H
