#include <iostream>
#include <cmath>

int main () {
    int n;
    std::cin >> n;

    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;

        if (i % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }

    }

    if (evenSum == oddSum) {
        std::cout << "Yes" << std::endl;
        std::cout << "Sum = " << evenSum << std::endl;
    } else {
        std::cout << "No" << std::endl;
        std::cout << "Diff = " << std::abs(evenSum - oddSum) << std::endl;
    }
}