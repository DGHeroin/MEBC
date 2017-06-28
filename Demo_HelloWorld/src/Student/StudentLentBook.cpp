#include "StudentLentBook.h"
#include "LibraryManager/LibraryManager.h"

/**
 * @brief      { function_description }
 *
 * @param[in]  id    The identifier
 *
 * @return     { description_of_the_return_value }
 */
Book* StudentLentBook::Lend(std::string id) {
    if (LibraryManager::GetInstance()->IsBookCanLend(id)) {
        return LibraryManager::GetInstance()->RendBook(id);
    }
    return nullptr;
}