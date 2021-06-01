#include "File.hpp"

File::File(std::string name, std::string contents)
{
    this->name = name;
    this->contents = contents;
}

std::string File::getName()
{
    return name;
}

std::string File::getContents()
{
    return contents;
}