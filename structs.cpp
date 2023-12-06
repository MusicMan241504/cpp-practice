#include <iostream>
struct Product {
	int weight {};
	double price {};
}eggs [3]; // optional object_names parameter directly declares objects of structure type

int main() {
	Product apple;
	apple.weight = 10;
	apple.price = 2.5;
	std::cout << apple.weight << '\n';

	Product orange {7, 1.1}; // uses aggregate initilisation
	std::cout << orange.price << '\n';

	Product chickens [3] {};
	for (int i = 0; i < 3; ++i) {
		chickens[i].weight = (i+1)*2;
		chickens[i].price = (i+1)*7.6;
	}
	std::cout << chickens[2].weight << '\n';

	for (int i = 0; i < 3; ++i) {
		eggs[i].weight = (i+1);
		eggs[i].price = (i+1)*0.1;
	}
	std::cout << eggs[1].price << '\n';

	return 0;
}
