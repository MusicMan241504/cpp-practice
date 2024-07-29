#include <iostream>
#include <vector>

struct Node {
	size_t key {}; // data item
	Node* left {}; // pointer to left child
	Node* right {}; // pointer to right child
};



/*
void traverse (Node* tree) { // post order traverse
	if (tree->left != nullptr) { // left
		traverse(tree->left);
	}
	if (tree->right != nullptr) { // right
		traverse(tree->right);
	}
	std::cout << tree->key << '\n'; // node
}
*/

void traverse (Node* tree) { // this handles a nullptr being passed into the tree initially
	if (tree == nullptr) {
		return;
	}
	traverse(tree->left);
	traverse(tree->right);
	std::cout << tree->key << '\n';
}

void createTree(Node* tree, std::vector<int>& arr, size_t nodes) {
	if (nodes == arr.size()) {
		tree->key = 1;
	} else {
		tree->left = new Node{}; // allocate memory from heap and store pointer in tree
		tree->right = new Node{};

		createTree(tree->left, arr, nodes*2);
		createTree(tree->right, arr, nodes*2);
		tree->key = tree->left->key + tree->right->key;
	}
}
/*
void deleteTree(Node* tree) { // free memory allocated using new cmd
	if (tree->left != nullptr) { // left
		deleteTree(tree->left);
	}
	if (tree->right != nullptr) { // right
		deleteTree(tree->right);
	}
	delete tree;
}
*/
void deleteTree(Node* tree) {
	if (tree == nullptr) {
		return;
	}
	deleteTree(tree->left);
	deleteTree(tree->right);
	delete tree;
}

void deleteTree2(Node* tree) { // free memory allocated using new cmd
	if (tree != nullptr) {
		deleteTree2(tree->left);
		deleteTree2(tree->right);
		delete tree;
	}

}




int main() {
	{ // tree 1
		Node left{1};
		Node right{2};
		Node tree{0,&left,&right};

		traverse(&tree);
	}


	{ // create tree which sums an array of integers
		std::vector<int> arr {1,2,3,4,5,6,7,8};
		Node* tree {new Node{}};
		createTree(tree, arr, 1);

		std::cout << tree->right->right->key << "\n\n\n";

		traverse(tree);

		deleteTree(tree); // free all memory for each node
		tree = nullptr; // let us know that this tree has been removed

		traverse(tree); // should return instantly as tree is nullptr





	}


	return 0;
}
