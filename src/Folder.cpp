#include "Folder.hpp"

Folder::Folder(std::string name)
{
    this->name = name;
}

std::string Folder::getContents()
{
    return contents;
}

std::string Folder::getName()
{
    return name;
}