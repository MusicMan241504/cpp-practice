#include <fstream>
#include <iostream>
int main() {
	// create output file stream
	std::ofstream outf {"file.txt"};
	
	// check if file canr be opened
	if (!outf) {
		std::cerr << "Cannot write to file\n";
		return 1; // error code
	}

	outf << "exactly the same as using cout\n";
	outf << "line 2\n"; // newline char needed
			    
	return 0;
	// buffer is only written to file when file is closed as the buffer is never flushed in this program
}
