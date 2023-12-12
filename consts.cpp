#include <iostream>
int main() {
	const int x{3+4}; // should be complile time const - evaluates at compile time
	constexpr int y{4}; // definetly compile time const
			
	std::cout << x << y << '\n';
	return 0;
}
