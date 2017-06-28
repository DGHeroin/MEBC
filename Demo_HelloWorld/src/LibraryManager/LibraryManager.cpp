#include "LibraryManager.h"
#include <iostream>
using namespace std;

LibraryManager *LibraryManager::g_Instance = nullptr;

bool LibraryManager::IsBookCanLend(std::string id) const {
    return true;
}

void LibraryManager::SetMainLibrary(Library* lib) {
    m_mainLibrary = lib;
}

Book* LibraryManager::RendBook(std::string id) {
    if (m_mainLibrary != nullptr)
        return m_mainLibrary->GetBook(id);
    return nullptr;
}

LibraryManager* LibraryManager::GetInstance() {
    if (g_Instance == nullptr) {
        g_Instance = new LibraryManager();
    }
    return g_Instance;
}