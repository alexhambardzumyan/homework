#include <iostream>

int condition() {

    int f1;
    std::cin >> f1;

    int f2;
    std::cin >> f2;

    int f3;
    std::cin >> f3;

    int f4;

    if (f1 > f2)
        f4 = f1;
    else
        f4 = f2;

    if (f4 > f3)
        std::cout << f4;
    else
        std::cout << f3;

    return 0;

}


int main() {

    condition();

}