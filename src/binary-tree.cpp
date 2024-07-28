#include <iostream>

struct Node {
	size_t val {};
	Node* left {};
	Node* right {};
};

void traverse (Node* tree) { // post order traverse
	if ((*tree).left != nullptr) {
		traverse((*tree).left);
	}
	if ((*tree).right != nullptr) {
		traverse((*tree).right);
	}
	std::cout << (*tree).val << '\n';
}


int main() {


	Node left = Node{1};
	Node right = Node{2};
	Node tree = Node{0,&left,&right};

	std::cout << (*tree.left).val << "\n\n";

	traverse(&tree);

	return 0;
}
