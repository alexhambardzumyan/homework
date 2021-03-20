#include <iostream>

void cycle() {

    int i;
    for (i = 1; i <= 100; i += 2)
        std::cout << i << std::endl;

}

int main() {

    cycle();

}