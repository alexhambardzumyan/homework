#include <iostream>

int add3num(int add1, int add2, int add3) {

	std::cout << "This function will add " << add1 << ", " << add2
		<< " and " << add3 << " together.\n"
		<< "The result is " << add1 + add2 + add3 << ".";

	int num3add = add1 + add2 + add3;

	return num3add;
}

int main() {

	add3num(5, 7, 8);

}