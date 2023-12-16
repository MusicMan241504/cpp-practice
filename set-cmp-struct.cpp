
#include <iostream>
#include <set>
#include <string>
struct Node{
	int x;
	int y;
	std::string name;
};

template <typename T>
void printSet(const T& s){
	for (const auto& n : s) {
		std::cout << n.x << ' ' << n.y << ' ' << n.name << '\n';
	}
}

int main() {
	auto cmp{
		[](Node x, Node y) {
			if(x.x < y.x) {
				return true;
			} else {
				return false;
			}
		}
	};

	std::set<Node,decltype(cmp)> s{cmp};

	s.insert(Node{1,2,"hi"});
	s.insert(Node{3,1,"hello"});
	s.insert(Node{2,10,"x"});

	printSet(s);


	return 0;
}
