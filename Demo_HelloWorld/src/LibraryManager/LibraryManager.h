#ifndef LIBRAY_MANAGER_H
#define LIBRAY_MANAGER_H

#include "mebc.h"
#include <string>
#include "Library/Library.h"

class LibraryManager : IManager
{
public:
    static LibraryManager* GetInstance();

    void SetMainLibrary(Library *lib);

    bool IsBookCanLend(std::string id) const;
    Book* RendBook(std::string id);
private:
    static LibraryManager *g_Instance;

    Library* m_mainLibrary;
};

#endif // LIBRAY_MANAGER_H
