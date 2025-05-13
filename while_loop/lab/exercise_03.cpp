#include <iostream>

int main() {
    int targetSum, currentSum = 0, inputNumber;
    std::cin >> targetSum;

    while (currentSum < targetSum) {
        std::cin >> inputNumber;
        currentSum += inputNumber;
    }

    std::cout << currentSum << std::endl;
}