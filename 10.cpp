#include <iostream>

int gen(int int1) {

	std::cout << int1 << " is the integer type.\n";

	return 0;
}


float fpoint(float float1) {

	std::cout << float1 << " is the float type.\n";

	return 0;

}

double dfloat(double dou1) {

	std::cout << dou1 << " is the double type.\n";

	return 0;

}


bool george(bool tr1, bool fa1) {

	std::cout << tr1 << " and " << fa1 << " are " << " bool types."
		<< " The first is true, the second - false.\n";

	return 0;

}

char symb(char sym1) {
	
	std::cout << sym1 << " is the char type.\n";

	return 0;

}
int main() {

	gen(80);
	fpoint(74.3);
	dfloat(567.789);
	george(true, false);
	symb('K');

}