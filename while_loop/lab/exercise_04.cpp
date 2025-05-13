#include <iostream>

int main() {
    int limitNumber, currentNumber = 1;
    std::cin >> limitNumber;

    while (currentNumber <= limitNumber) {
        std::cout << currentNumber << std::endl;
        currentNumber = 2 * currentNumber + 1;
    }
}