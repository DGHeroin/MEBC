#include <iostream>
using namespace std;

#include "mebc.h"
#include "Student/Student.h"
#include "Student/StudentLentBook.h"
#include "LibraryManager/LibraryManager.h"

/**
 * @brief      { function_description }
 *
 * @param[in]  argc  The argc
 * @param      argv  The argv
 *
 * @return     { description_of_the_return_value }
 */
int main(int argc, char const *argv[]) {
    cout << "Demo Hello World!" << endl;

    Library mainLibrary;

    // Builtin books
    Book b1("b001", "Game of throne V", "novel");
    Book b2("b002", "Game of throne VI", "novel");

    Book b3("t001", "Game Gems V", "Tech");
    Book b4("t002", "Game Gems VI", "Tech");

    mainLibrary.AddBook(&b1);
    mainLibrary.AddBook(&b2);
    mainLibrary.AddBook(&b3);
    mainLibrary.AddBook(&b4);

    LibraryManager::GetInstance()->SetMainLibrary(&mainLibrary);

    Student student1("jom");
    Student student2("tom");

    student1.AddBehaviour(new StudentLentBook());
    student1.NeedToRead("t001");
    student2.NeedToRead("t002");

    cout << "student 2 id: " << student2.GetID() << endl;
    return 0;
}