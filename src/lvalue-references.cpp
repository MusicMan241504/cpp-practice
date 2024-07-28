#include <iostream>
int main() {
	int x {5}; // integer lvalue
	int& xRef {x}; // lvalue reference
	x = 6;
	std::cout << xRef << '\n';
	xRef = 7;
	std::cout << x << '\n';
}
