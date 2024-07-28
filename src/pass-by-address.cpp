#include <iostream>
#include <string>

void printByAddress(const std::string* str) { // create pointer
	std::cout << *str << '\n'; // dereference pointer
}

int main() {
	std::string str{"Hello"};

	printByAddress(&str); // pass in reference

	return 0;
}
