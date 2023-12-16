#include <iostream>
#include <set>

template <typename T>
void printSet(const T& s) {
	for (const auto& e : s) {
		std::cout << e << ' ';
	}
	std::cout << '\n';
}

int main() {

	auto cmp{
		[](int x, int y) {
			if (x>y) {
				return true; // don't swap
			} else {
				return false; // swap
			}
		}
	};
	
	//declytype() returns the type the function returns
	std::set<int,decltype(cmp)> s(cmp);
	s.insert({1,2,6,3,1,567,3});
	printSet(s);

	return 0;
}

