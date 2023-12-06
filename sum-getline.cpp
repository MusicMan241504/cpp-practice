#include <iostream>
#include <string>
int main() {
//	std::string totalStr {};
	int total {0};
	std::string str {'0'};
	while (str != "exit") { // stop when exit entered
//		totalStr += str;
		// lines this way round so "exit" is not attempted to be converted to int
		total += std::stoi(str); // convert string to integer
		std::getline(std::cin, str); // get 1 line of text as string
	}
	std::cout << total << '\n';
	return 0;
}
