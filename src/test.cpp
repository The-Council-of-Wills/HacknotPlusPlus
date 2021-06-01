#include <iostream>
#include <cstring>
#include <string>

int main()
{
	std::string str1;
	std::string str2;
	std::getline(std::cin, str1);
	std::getline(std::cin, str2);
	std::cout << str1.compare(str2) << "\n";
	return 0;
}