#include <iostream>
#include <string>

void modify(std::string& str) { // can modify actual value
	str = "NO";
}

void print(const std::string& str) { // pass by const reference is better to use when do not need to modify variable
	std::cout << str << '\n';
}

int main() {
	std::string str {"Hello"};
	modify(str);
	print(str);
	return 0;
}
