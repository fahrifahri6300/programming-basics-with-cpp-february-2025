#include <iostream>
#include <string>

int main() {
    std::string destName;

    while (std::cin >> destName && destName != "End") {
        double requiredBudget, currentSavings = 0.00;
        std::cin >> requiredBudget;

        while (currentSavings < requiredBudget) {
            double savedAmount;
            std::cin >> savedAmount;
            currentSavings += savedAmount;
        }

        std::cout << "Going to " << destName << "!" <<std::endl;
    }
}