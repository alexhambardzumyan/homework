# include <iostream>

void  pair() {

	int pair1;
	std::cin >> pair1;

	if (pair1 % 2 == 0)
	{
		std::cout << "The number " << pair1 << " is even number." << std::endl;
	}

	else if (pair1 % 2 != 0)
	{

		std::cout << "The number " << pair1 << " is odd number";

	}



}



int main() {

	pair();

}