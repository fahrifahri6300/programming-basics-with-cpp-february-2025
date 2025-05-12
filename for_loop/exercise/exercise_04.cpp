#include <iostream>

int main () {
    int lilyAge, toyPrice;
    double washingMachinePrice;
    std::cin >> lilyAge >> washingMachinePrice >> toyPrice;

    int totalMoney = 0, moneyGiftAmount = 9;
    const int moneyGiftCount = lilyAge / 2;
    totalMoney += toyPrice * (lilyAge - moneyGiftCount);

    for (int i = 0; i < moneyGiftCount; i++) {
        totalMoney += moneyGiftAmount;
        moneyGiftAmount += 10;
    }

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    if (totalMoney < washingMachinePrice) {
        std::cout << "No! " <<  washingMachinePrice - totalMoney << std::endl;
    } else {
        std::cout << "Yes! " << totalMoney - washingMachinePrice << std::endl;
    }
}