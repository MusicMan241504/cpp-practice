#include <cstddef>
#include <iostream>
#include <iterator>
int main() {
	int arr[4][4] {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	// iterate through array using indices
	for (std::size_t row{0}; row < std::size(arr); ++row) { // always iterate rows first as this is order in memory
		for (std::size_t col{0}; col < std::size(arr); ++col) {
			std::cout << arr[row][col] << ' ';
		}
		std::cout << '\n';
	}

	// iterate using range bases loops
	for (const auto& row : arr) {
		for (const auto& element : row) {
			std::cout << element << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}
