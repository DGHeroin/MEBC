#include "StudentLentBook.h"
#include "LibraryManager/LibraryManager.h"

Book* StudentLentBook::Lend(std::string id) {
    if (LibraryManager::GetInstance()->IsBookCanLend(id)) {
        return LibraryManager::GetInstance()->RendBook(id);
    }
    return nullptr;
}