#include <iostream>

int less() {

	int les1;
	int les2;

	std::cin >> les1;
	std::cin >> les2;

	if (les1 > les2)
		std::cout << les2;
	else
		std::cout << les1;

	return 0;

}

int main() {

	less();

}