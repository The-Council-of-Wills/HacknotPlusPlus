#include <iostream>
#include "rogueutil.h"

int main()
{
  rogueutil::setColor(4);
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
