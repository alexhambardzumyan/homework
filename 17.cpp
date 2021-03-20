#include <iostream>

void numbers() {

	int a;
	std::cout << "Enter the first number: ";
	std::cin >> a;

	int b;
	
	std::cout << "Enter the second number: ";
	std::cin >> b;

	int c;
	std::cout << "Enter the third number: ";
	std::cin >> c;

	int sum;

	if (a == b){
		std::cout << c << std::endl;
	}

	else if (a == c) {
		std::cout << b << std::endl;
	}

	else if (b == c) {
		std::cout << a << std::endl;
	}

	else {
		std::cout << "No No No";
	}
}
int main() {

	numbers();


}