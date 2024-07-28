#include <iostream>
int main() {

	enum class Color { // creates scoped enum - prefer over unscoped
		red, // considered part of Color's scope
		gree,
		blue
	};

	Color color {Color::blue};
//	std::cout << color << '\n'; // wont work as not automatically converted to int
	std::cout << static_cast<int>(color) << '\n'; // use sttatic_cast to convert to int

	return 0;
}


