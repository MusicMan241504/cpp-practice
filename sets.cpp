#include <iostream>
#include <set>

template <typename T>
void printSet(T s) {
	for (const auto& e : s) {
		std::cout << e << ' ';
	}
	std::cout << '\n';
}

int main() {
	// set stores a set of unique objects in a sorted order ( default ascending sort)
	std::set<int> s{1,2,7};
	
	printSet(s);

	s.insert(4);
	printSet(s);

	s.insert(2); // doesn't do anything as set doesn't support suplicate items
	printSet(s);

	s.insert(6); // automatically adds items to be sorted
	s.insert(4);
	printSet(s);

	std::cout << s.count(2) << '\n'; // count occurrences of item

	
	return 0;
}
