#include <iostream>
#include <string>
#include <algorithm>

int main() {
    double targetAmount, currentMoney;
    std::cin >> targetAmount >> currentMoney;

    int consecutiveSpendDays = 0, totalDaysCount = 0;
    std::string actionType;
    double transactionAmount;

    while (currentMoney < targetAmount && consecutiveSpendDays != 5) {
        std::cin >> actionType >> transactionAmount;

        if (actionType == "spend") {
            currentMoney -= std::min(transactionAmount, currentMoney) ;
            consecutiveSpendDays++;
        } else {
            currentMoney += transactionAmount;
            consecutiveSpendDays = 0;
        }

        totalDaysCount++;
    }

    if (consecutiveSpendDays == 5) {
        std::cout << "You can't save the money." << std::endl;
        std::cout << totalDaysCount << std::endl;
    } else {
        std::cout << "You saved the money for " << totalDaysCount << " days." << std::endl;
    }
}