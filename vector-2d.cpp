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
	std::vector<std::vector<int>> arr(3,std::vector<int> (4,0)); // initliase 2d vector 3x4 rowsxcols with values all 0s

	printArr(arr);

	for (size_t i = 0; i < 3; ++i) {
		for (size_t j = 0; j < 4; ++j) {
			arr[i][j] = (i*4)+j;
		}
	}


	printArr(arr);

	return 0;
}
