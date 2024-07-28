#include <iostream>
#include <vector>

template <typename T>
void printArrIndex(const T& arr) { // use standard for loop with index
	for (size_t i{0}; i < arr.size(); ++i) {
		std::cout << arr[i] << '\n';
	}
}

template <typename T>
void printArrRange(const T& arr) { // use range based for loop (for-each)
						  // Use instead of regular for loop
	for (const auto& num : arr) { // use const reference to avoid copying value
		std::cout << num << '\n';
	}
}

int main() {
	std::vector<int> arr{1,2,3,4,5};
	printArrIndex(arr);
	printArrRange(arr);

	return 0;
}
