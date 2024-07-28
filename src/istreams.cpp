#include <iomanip>
#include <iostream>
#include <string>
int main() {
	char buf[10];
	std::cin >> std::setw(11) >> buf; // manipulator only gets next 10 chars plus one (leaving room for terminator) - leaves new line in stream - stops at any whitespace
	std::cout << buf << '\n';

	std::cin.get(buf, 11); // fetches x characters - stops if finds new line
	std::cout << buf << '\n';

	// using strings not char array
	std::string str {};
	std::getline(std::cin, str);
	std::cout << str << '\n';
	return 0;
}
