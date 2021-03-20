#include <iostream>

int condition() {

    int f1;
    std::cin >> f1;

    int f2;
    std::cin >> f2;

    if (f1 > f2)
        std::cout << f1;
    else
        std::cout << f2;

    return 0;

}


int main() {

    condition();

}