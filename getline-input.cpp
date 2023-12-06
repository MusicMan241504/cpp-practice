#include <iostream>
int main() {
	std::string text;

//	cout << "Type multiple words and press enter\n";
//	cin >> text; // reads chars before first whitespace
//	cout << text << '\n';

	std::cout << "Type multiple words and press enter\n";
	getline(std::cin, text); // reads untill \n from cin into text var
	std::cout << text << '\n';

}
