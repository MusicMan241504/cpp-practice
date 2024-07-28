#include <iostream>
#include <string>
#include <fstream>
int main() {
	std::ifstream inf {"nums.txt"}; // create file input stream
	
	if (!inf) {
		std::cerr << "Cannot open file\n";
		return 1;
	}

	int total {0};
	std::string str {'0'};
	while (inf && !str.empty()) { // text still in file and string not empty
		total += std::stoi(str); // convert string to integer
		std::getline(inf, str); // get 1 line of text as string
	}
	std::cout << total << '\n';
	return 0;
}
