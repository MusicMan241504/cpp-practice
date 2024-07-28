#include <iostream>
int main() {
	char c {'A'};
	std::cout << c << ' ' << static_cast<int>(c) << '\n'; // always use static cast instead of (int)
	return 0;
}
