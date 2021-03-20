#include <iostream>
#include <string>

void country() {

	std::cout << "Which country do you want to go?: \n";
	std::string n1;
	std::cin >> n1;

}

void city() {

	std::cout << "Which city do you want to go?: \n";
	std::string n2;
	std::cin >> n2;

}


void food() {

	std::cout << "What kind of food do you want to eat there?: \n";
	std::string n3;
	std::cin >> n3;

}

int main() {

	country();
	city();
	food();
}