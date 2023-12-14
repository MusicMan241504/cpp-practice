#include <iostream>
#include <vector>

void printArr(const std::vector<std::vector<int>> arr) {
	for (const auto& row : arr) {
		for (const auto& e : row) {
			std::cout << e << ' ';
		}
		std::cout << '\n';
	}
}

int main() {
	std::vector<std::vector<int> > arr(3);

	for (size_t i = 0; i < 4; ++i) {
		for (size_t j = 0; i < 5; ++i) {
			arr[i][j] = i*j;
		}
	}

	arr = {
		{0,1,2,2},
		{3,4,5,2},
		{6,7,8,2}
	};
	std::cout << arr[0][2];

	printArr(arr);

	return 0;
}
