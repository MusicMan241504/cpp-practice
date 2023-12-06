#include <iostream>
class Rect {
	// private member variables
	int m_width {};
	int m_length {};
	public:
		int area() { // public method returns area
			return m_width*m_length;
		}
		Rect(int width, int length) // create constructor
			// use member initialization not copy initialization `m_width = width;`
			: m_width {width}
			, m_length {length}
			{}
};

int main() {
	Rect rect(12,10);
	std::cout << rect.area() << '\n';
	return 0;
}


