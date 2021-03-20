#include <iostream>
#include <string>


void quan() {

	std::string usename;
	std::cout << "Enter your name please: ";
	std::cin >> usename;

	int num;
	std::cout << "How much do you want to print user's name?: ";
	std::cin >> num;

	int i = 0;
	while (i <= num) {
		std::cout << usename << " " << std::endl;
		i++;
	}
}
int main() {

	quan();

}