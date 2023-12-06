#include <fstream>
#include <iostream>
#include <string>
int main() {
	std::ifstream inf{"file.txt"}; // create input file stream
	
	if (!inf) { // check can open file
		std::cerr << "Cannot read file\n";
		return 1;
	}

	while (inf) { // while stuff to read in file
		std::string str;
//		inf >> str; // dont do this as treats any whitespace separately
		std::getline(inf, str); // read 1 line in file
		std::cout << str << '\n';
	}
	return 0;

	// when out of scope file closes
}
