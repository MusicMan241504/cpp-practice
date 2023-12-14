#include <array>
#include <iostream>
int main() {
	std::array<std::array<int,3>,3> arr{{ // double brackets needed
		{1,2,3},
		{4,5,6},
		{7,8,9}
	}};

	for (const auto& row : arr) {
		for (const auto& e : row) {
			std::cout << e << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}
