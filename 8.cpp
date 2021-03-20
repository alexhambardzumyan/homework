#include <iostream>

int sm(int num1, int num2) {

    std::cout << "The summary of " << num1 << " and " << num2
        << " is " << num1 + num2;
    int sum = num1 + num2;
    return sum;
}

int main() {

    sm(4, 5);

}