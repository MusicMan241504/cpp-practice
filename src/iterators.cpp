#include <vector>
#include <iostream>
int main() {
	std::vector<int> v{1,2,3,4,5,6,7,8,9};
	for (auto p{v.begin()}; p!= v.cend(); ++p) { // p is a iterator that is a pointer
		// for iterators use != not <
		// v.begin() same as std::begin(v) - prefer v.begin() unless using as template for c style arrays
		// v.cend() returns a const of one after last item
		// for ranged based loops use iterators so easier to use them e.g.
		// for (auto& e : v) {};
		std::cout << *p << ' '; // so dereference operator needed here
	}
	std::cout << '\n';

	return 0;
}
