#include <iostream>
#include <string>

bool isPrime(const int n) {
    if (n == 0 || n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    std::string input;
    int primeSum = 0, nonPrimeSum = 0;

    while (std::cin >> input && input != "stop") {
        const int num = std::stoi(input);

        if (num < 0) {
            std::cout << "Number is negative." << std::endl;
            continue;
        }

        if (isPrime(num)) {
            primeSum += num;
        } else {
            nonPrimeSum += num;
        }
    }

    std::cout << "Sum of all prime numbers is: " << primeSum << std::endl;
    std::cout << "Sum of all non prime numbers is: " << nonPrimeSum << std::endl;
}