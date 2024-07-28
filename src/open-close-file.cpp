#include <iostream>
#include <fstream>
int main() {
	std::ofstream outf {"file.txt"};

	if (!outf) {
		std::cerr << "Cannot open file\n";
		return 1;
	}

	outf << "line 1\n";
	outf.close(); // close file
	
	outf.open("file.txt", std::ios::app); // open file again in append mode
	outf << "line 2\n";
}
