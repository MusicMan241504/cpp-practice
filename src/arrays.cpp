#include <array>
#include <iostream>

void generate(std::array<int,5>& arr) { // pass by reference to use as out parameter
					// must be non const to be able to change array in procedure

	arr = {5,4,3,2,1}; // assign new values to array
} // don't return array

int main() {
	std::array<int, 5> a{}; // create array 5 long
				// length must be constexpr


	const std::array<int, 5> b{1,2,3,4,5}; // elements treated as const when array is of const type
//	b[0] = 2; // this won't work as array is const

	constexpr std::array<int, 5> c{2,3,5,7,11}; // when possible use constexpr as allows compiler to optimise code more

	std::cout << c.size() << '\n'; // get size as size_type
				       // c.ssize() gets size as signed integral
				       

	// std::array doesn't support move semantics
	// small arrays can be returned by value but it is inefficient
	// if big array return by out parameter
	

	// return by out parameter
	std::array<int,5> arr{};
	generate(arr);
	std::cout << arr[0] << '\n';

	// a better solution is probably to use a vector instead
	

	return 0;
}
