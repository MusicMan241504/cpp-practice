// vectors are resizeable arrays unlike std::array
// They have a separate length and capacity
// capacity needed if length is decreased then increased again (5 -> 3 -> 5) so avoids reallocating memory

#include <vector>
#include <iostream>

void printArr(const std::vector<int>& arr) {
	for (int item : arr) {
		std::cout << item << '\n';
	}
	std::cout << '\n';
}


int main() {
	std::vector v{0,1,2,3}; // create vector of length 4
	std::cout << v.size() << '\n'; // output length
	std::cout << v.capacity() << "\n\n"; // output capacity
	printArr(v);

	v.resize(5); // expensive as new memory is allocated and old values copied accross
	printArr(v);


	return 0;
}


