
#include <cstddef>
#include <iostream>
#include <string>
#include <string_view>
int main() {
	std::string str {};
	std::getline(std::cin, str); // reads line
	std::cout << str << '\n';
	std::getline(std::cin >> std::ws, str); // ignore any leading whitespace
	std::size_t length {str.length()};
	std::cout << str << ' ' << length << '\n'; // print string and length of string
	// more efficient way to do this uses string_view which avoids copying the string
	std::string_view vStr {"Example string"};
	std::cout << vStr << '\n';

	//string manipulation
	str = "hello world hello world";
	std::size_t i {str.find("world")}; //returns size_t not standard int
					   // size_t is unsigned at least 16 bits
	std::cout << i << '\n';
	return 0;
}
