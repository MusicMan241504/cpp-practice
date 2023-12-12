#include <cstddef>
#include <iostream>
#include <vector>

void printArrIndex(const std::vector<int>& arr) { // use standard for loop with index
	for (std::size_t i{0}; i < arr.size(); ++i) {
		std::cout << arr[i] << '\n';
	}
}

void printArrRange(const std::vector<int>& arr) { // use range based for loop (for-each)
						  // Use instead of regular for loop
	for (const int& num : arr) { // use const reference to avoid copying value
		std::cout << num << '\n';
	}
}

int main() {
	std::vector<int> arr{1,2,3,4,5};
	printArrIndex(arr);
	printArrRange(arr);

	return 0;
}
