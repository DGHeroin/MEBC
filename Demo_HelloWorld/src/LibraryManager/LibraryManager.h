#ifndef LIBRAY_MANAGER_H
#define LIBRAY_MANAGER_H

#include "mebc.h"
#include <string>
#include "Library/Library.h"

/**
 * @brief      Class for library manager.
 */
class LibraryManager : IManager
{
public:
    /**
     * @brief      Gets the instance.
     *
     * @return     The instance.
     */
    static LibraryManager* GetInstance();

    /**
     * @brief      Sets the main library.
     *
     * @param      lib   The library
     */
    void SetMainLibrary(Library *lib);

    /**
     * @brief      Determines if book can lend.
     *
     * @param[in]  id    The identifier
     *
     * @return     True if book can lend, False otherwise.
     */
    bool IsBookCanLend(std::string id) const;

    /**
     * @brief      { function_description }
     *
     * @param[in]  id    The identifier
     *
     * @return     { description_of_the_return_value }
     */
    Book* RendBook(std::string id);
private:
    /**
     * { item_description }
     */
    static LibraryManager *g_Instance;

    /**
     * { item_description }
     */
    Library* m_mainLibrary;
};

#endif // LIBRAY_MANAGER_H
