#include <iostream>
int main() {
	{
	int x {5};
	int& ref {x}; // reference to x
	std::cout << ref << '\n';

	int* ptr {&x}; // initialise pointer pointing to x (x pointer)
	std::cout << ptr << '\n'; // print pointer (address of x)
	std::cout << &ptr << '\n'; // print pointer address (address of pointer)
	std::cout << '\n';
	}

	
	// using pointers
	{
	int y {3};
	int* ptr {&y}; // pointer contains address of y
	std::cout << ptr << '\n'; // prints address
	std::cout << *ptr << '\n'; // prints value of y
	std::cout << '\n';
	}

	// consts and pointers
	{
	const int x{2};
	const int* ptr {&x}; // ptr points to constant int but pointing itself isnot const
	std::cout << *ptr << '\n';
	std::cout << '\n';
	}

	// const pointer
	{
	int x{3};
	int* const ptr {&x}; // const after * means const pointer
			     // pointer cannot point to anything else (const address)
	std::cout << *ptr << '\n';
	std::cout << '\n';
	}

	// const pointer to const value
	{
	const int x{4};
	const int* const ptr{&x}; // pointer cannot be changed and x cannot be changed
	std::cout << *ptr << '\n';
	}

	return 0;
}
