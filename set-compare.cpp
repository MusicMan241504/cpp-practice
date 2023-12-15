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

	auto cmp{
		[](int x, int y) {
			if (x>y) {
				return true;
			} else {
				return false;
			}
		}
	};
	
	//declytype() returns the type the function returns
	std::set<int,decltype(cmp)> s;
	printSet(s);

	return 0;
}

