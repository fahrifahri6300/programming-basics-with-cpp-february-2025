#include <iostream>
#include <string>

int main() {
    double accountBalance = 0;
    std::string input;
    std::cin >> input;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    while (input != "NoMoreMoney") {
        const double depositAmount = std::stod(input);

        if (depositAmount < 0) {
            std::cout << "Invalid operation!" << std::endl;
            break;
        }

        accountBalance += depositAmount;
        std::cout << "Increase: " << depositAmount << std::endl;
        std::cin >> input;
    }

    std::cout  << "Total: " << accountBalance << std::endl;
}