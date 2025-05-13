#include <iostream>
#include <climits>
#include <string>

int main() {
    int maxNumber = INT_MIN;
    std::string input;
    std::cin >> input;

    while (input != "Stop") {
        const int currentNumber = std::stoi(input);

        if (currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }

        std::cin >> input;
    }

    std::cout  << maxNumber << std::endl;
}