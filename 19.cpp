#include <iostream>
#include <string>


void entername() {

	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;

	std::string age;
	std::cout << "How old are you?: ";
	std::cin >> age;

	std::cout << "Hello, " << name << ". "
		<< "You're " << age << " years old.";

}




int main() {

	entername();


}