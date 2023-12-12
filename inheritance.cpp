#include <iostream>

class Superclass {
	int m_x{};

	public:
		Superclass(int x) : m_x{x} {}

		int getX() { return m_x; }
};

class Subclass : public Superclass {
	int m_y{};

	public:
		Subclass(int x, int y) : Superclass{x}, m_y{y} {}

		int getY() { return m_y; }
	
};

int main() {
	Subclass obj(1,2);
	std::cout << obj.getX() << '\n';
	std::cout << obj.getY() << '\n';
}

