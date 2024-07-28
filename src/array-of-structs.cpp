#include <array>
#include <iostream>
struct Node {
	int x{};
	int y{};
	int height{};
};

int main() {
	std::array<Node,5> nodes{};

	for (Node& node : nodes) {
		node = {1,2,3}; // don't need to specify Node as already initialised
	}

	std::cout << nodes[0].x << '\n';

	return 0;
}
