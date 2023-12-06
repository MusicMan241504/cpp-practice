#include <iostream>
int main() {
	int x {5};
	int& ref {x}; // reference to x
	std::cout << ref << '\n';

	int* ptr {&x}; // initialise pointer pointing to x (x pointer)
	std::cout << ptr << '\n'; // print pointer (address of x)
	std::cout << &ptr << '\n'; // print pointer address (address of pointer)
	return 0;
}
