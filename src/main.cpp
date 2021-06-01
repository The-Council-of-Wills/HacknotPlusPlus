#include <iostream>
#include <map>
#include <string>

// #include "rogueutil.h"

int main()
{
    bool isRunning = true;
    std::string input;

    std::map<std::string, int> commandMap;
    commandMap["exit"] = 1;
    commandMap["help"] = 2;

    while (isRunning)
    {
        std::cout << ">";
        std::getline(std::cin, input);
        switch (commandMap[input])
        {
            case 1:
                exit(0);
            case 2:
                std::cout << "Command List\nhelp - Prints this help message\nexit - Exits the terminal\n\n";
                break;
            default:
                std::cout << "Invalid command.\n";
                break;
        }
    }
    return 0;
}
