#include <cstddef>
#include <iostream>
#include <vector>
int main() {
	std::vector<int> arr{1,2,3,4,5};
	std::cout << arr[0] << '\n';

	// shows vector is contiguous in memory by printing references
	
	std::cout << &arr[0] << '\n';
	std::cout << &arr[1] << '\n';  
	std::cout << &arr[2] << '\n';  
	std::cout << &arr[3] << '\n';  
	std::cout << &arr[4] << '\n';  

	// creating empty arrays of set length
	
	std::vector<int> data(10); // vector containing 10 items value initialised t0
	std::cout << data.size() << '\n'; // print length of array
	
	// accessing item using non const index
	
	std::size_t index {3}; // index should be size_t type not int
	std::cout << data[index] << '\n';
	

	return 0;
}
