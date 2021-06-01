#pragma once
#include <string>

class Folder
{
    private:
        std::string name;
        std::string contents;
    public:
        Folder(std::string name);
        std::string getName();
        std::string getContents();
};