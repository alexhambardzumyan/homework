#include <iostream>

int more() {

	int g1;
	std::cin >> g1;

	int g2;
	std::cin >> g2;

	int g3;
	std::cin >> g3;

	int g4;

	if (g1 > g2)
		g4 = g2;
	else
		g4 = g1;
		
	if (g4 > g3)
		std::cout << g3;
	else
		std::cout << g4;

	return 0;

}

int main() {
	
	more()

}