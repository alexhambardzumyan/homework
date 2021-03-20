#include <iostream>

void geo(int num1) {
	if (num1 % 2 == 0)
	{
		std::cout << " The number is odd" << std::endl;
		for (int i = 0; i <= 100; i++)
		{
			std::cout << " ," << i;
		}
	}
	if (num1 % 2 != 0)
	{
		std::cout << "The number is not odd" << std::endl;
		for (int i = 100; i >= 0; i--)
		{
			std::cout << " ," << i;
			
		}
	}
}
int main() {
	int num1;
	std::cout << " pls enter your number ->";
	std::cin >> num1;
	geo(num1);
}