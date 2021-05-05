#include <iostream>

#ifdef _WIN32
#include <string>
#endif

#include "rogueutil.h"

int main()
{
  bool isRunning = true;
  std::string input;
  while (isRunning)
  {
    std::cout << ">";
    std::getline(std::cin, input);
    if (input == "exit")
    {
      exit(0);
    }
    else
    {
      std::cout << "Invalid command.\n";
    }
  }
  return 0;
}
