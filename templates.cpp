#include <iostream>

template <typename T>
T sum(T x, T y) {
	return x+y;
}

int main() {
	int i{1};
	int j{2};
	std::cout << sum(i,j) << '\n';

	double d{1.2};
	double e{2.3};
	std::cout << sum(d,e) << '\n';


	return 0;
}
