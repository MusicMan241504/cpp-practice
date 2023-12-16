#include <iostream>
#include <map>
#include <string>
int main() {
	// map maps a key to a value
	
	std::map<std::string,int> m;
	m.insert({"one",1});
	m.insert({"two",2});

	std::cout << m["one"] << '\n';

	return 0;
}
