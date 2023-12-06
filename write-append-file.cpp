#include <fstream>
#include <iostream>
int main() {
	std::ofstream outf {"file.txt", std::ios::app}; // open file in append mode
	
	if (!outf) {
		std::cerr << "Cannot open file\n";
		return 1;
	}

	outf << "new line appended\n";

	return 0;
}	

