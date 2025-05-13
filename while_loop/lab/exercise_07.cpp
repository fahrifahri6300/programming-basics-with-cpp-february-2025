#include <iostream>
#include <climits>
#include <string>

int main() {
    int minNumber = INT_MAX;
    std::string input;
    std::cin >> input;

    while (input != "Stop") {
        const int currentNumber = std::stoi(input);

        if (currentNumber < minNumber) {
            minNumber = currentNumber;
        }

        std::cin >> input;
    }

    std::cout  << minNumber << std::endl;
}