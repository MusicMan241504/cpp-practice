#include <iostream>
#include <utility>
#include <vector>

int main() {
	int x{1};
	int y{2};
	std::swap(x,y);
	
	std::cout << x << y << '\n';

	std::vector<int> arr{1,2};
	std::swap(arr[0],arr[1]);
	for (const auto& e : arr) {
		std::cout << e;
	}
	std::cout << '\n';

	return 0;
}

