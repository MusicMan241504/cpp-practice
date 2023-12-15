#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>

void printList(std::list<int> l) {
	for (const auto& e : l) {
		std::cout << e << ' ';
	}
	std::cout << '\n';
}

int main() {
	// std::list is a doubly linked list
	std::list<int> l{1,2,4,5,6};
	
	// insert int after 2 by searching
	auto it{std::find(l.begin(), l.end(), 2)};
	
	// list.insert(it, item) inserts item before iterator
	// to insert item after iterator increment iterator by 1 using std::next(it)
	// std::next(it,num) - num defaults to 1 and can be negative or use std::prev to decrement
	l.insert(std::next(it), 3);

	printList(l);



	l.push_back(7); // add item to end of list
	printList(l);

	l.push_front(0); // add item to front of list
	printList(l);

	l.pop_front(); // removes first element returns void
	printList(l);

	l.pop_back(); // removes last element returns void
	printList(l);

	const size_t s{l.size()}; // get length of list
	std::cout << s << '\n';



	return 0;
}

