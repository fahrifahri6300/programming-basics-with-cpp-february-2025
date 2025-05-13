#include <iostream>

int main() {
    double money;
    std::cin >> money;

    int cents = static_cast<int>(money * 100), coinsCount = 0;

    coinsCount += cents / 200;
    cents %= 200;
    coinsCount += cents / 100;
    cents %= 100;
    coinsCount += cents / 50;
    cents %= 50;
    coinsCount += cents / 20;
    cents %= 20;
    coinsCount += cents / 10;
    cents %= 10;
    coinsCount += cents / 5;
    cents %= 5;
    coinsCount += cents / 2;
    cents %= 2;
    coinsCount += cents / 1;

    std::cout << coinsCount << std::endl;
}