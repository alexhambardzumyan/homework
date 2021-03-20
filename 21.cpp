#include <iostream>
#include <string>

void cycle() {
	std::cout << "Enter a word: ";
	std::string word;
	std::cin >> word;
	for (int i = word.size() - 1; i >= 0; i--)
		std::cout << word[i];
}


int main() {

	cycle();

	return 0;

}