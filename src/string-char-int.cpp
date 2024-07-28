#include <iostream>
#include <string>

int main() {
	std::string s{"abc123nhsdfnsdjisebukl47845jksdfbjhujh78789jk23789"};
	
	// using find
	{
	auto index{s.find_first_of("0123456789")};
	auto index2{s.find_first_not_of("0123456789",index)};
	std::cout << index << ' ' << index2 << '\n';
	
	int num{stoi(s.substr(index, index2-index))};
	std::cout << num << '\n';
	}

	// using iteration
	{
	int num{0};
	for (const auto& c: s) {
		if(std::isdigit(c)) {
			num = (num*10)+c-'0'; // auto cast char to int and subtract ascii of '0' to get int value
		}else if(num >0){
			std::cout << num << '\n';
			num = 0;
		}
	}

	}



	return 0;
}

