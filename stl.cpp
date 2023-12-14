#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
int main() {
	std::vector<int> v{1,2,1,3,4,6,4,9,5,2,1,3};
	
	// returns iterator pointing to found element or end of vector
	auto it{ std::find(v.begin(), v.end(), 2)};

	if(it != v.end()) { // item was found
		std::cout << "found" << '\n';
	}
	//index can be calulated using it - v.begin()
	std::cout << it - v.begin() << '\n';
	// or use std::distance
	std::cout << std::distance(v.begin(), it) << '\n';

	return 0;
}
