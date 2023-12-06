#include <iostream>
using namespace std;
int main() {
	int arr [6] {}; // initialize array with no values
	for (int i=0; i<6; ++i) { // iterate through array to set values
		arr[i] = i;
	}
	for (int i=0; i<6; ++i) { // iterate through array to print values
		cout << arr[i] << '\n';
	}
	cout << sizeof(arr)/sizeof(int) << '\n'; // get length of array by getting size in bytes and dividing by size of integer in bytes.
}
