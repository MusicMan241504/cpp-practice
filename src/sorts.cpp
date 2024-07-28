#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
int main() {
	std::vector<int> v{56,23,6,7,3,5,7,4};
	// std::begin returns iterator for beginning of array
	// std::end returns iterator for one beyond end of array
	std::sort(std::begin(v), std::end(v)); // sort an array

	for (const auto& e : v) {
		std::cout << e << ' ';
	}
	std::cout << '\n';

	return 0;
}
