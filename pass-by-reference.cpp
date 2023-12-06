#include <iostream>
void addOne(int& x) { // using reference is more efficient as saves copying variable and no need to return variable
	++x;
}
int main() {
	int x {1};
	addOne(x);
	std::cout << x << '\n';
	return 0;
}
