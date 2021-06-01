#pragma once
#include <string>

class File
{
    private:
        std::string name;
        std::string contents;
    public:
        File(std::string name, std::string contents);
        std::string getName();
        std::string getContents();
};