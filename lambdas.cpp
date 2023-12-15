#include <iostream>
int main() {
	// define lambda function here
	auto isEven{ // store lambda in variable
		[](int i) { // (input parameters in here)
			return (i%2)==0; // return value here
		}
	}; // semicolon needed

	std::cout << isEven(5) << isEven(2) << '\n';

	return 0;
}
