#include <deque>
#include <iostream>

void printDeque(std::deque<int> d) {
	for (const auto& e : d) {
		std::cout << e << ' ';
	}
	std::cout << '\n';
}

int main() {
	// deque implemented as dynamic array(std::vector) supporting appending and removing from both ends - but does not copy to resize so appending is not expensive
	

	// The complexity (efficiency) of common operations on deques is as follows:

    	// Random access - constant O(1).
    	// Insertion or removal of elements at the end or beginning - constant O(1).
    	// Insertion or removal of elements - linear O(n). 
	

	std::deque<int> d;
	
	d.push_front(1); // add item to front
	d.push_back(9); // add item to back
			
	printDeque(d);

	std::cout << d[0] << '\n'; // access specific element
	std::cout << d.front() << '\n'; // access first element
	std::cout << d.back() << '\n'; // access last element
	


	return 0;
}
