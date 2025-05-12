#include <iostream>
#include <climits>
#include <cmath>

int main () {
    int n;
    std::cin >> n;

    int sum = 0, maxNumber = INT_MIN;

    for (int i = 0; i < n; i ++) {
        int number;
        std::cin >> number;
        sum += number;

        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    const int difference = std::abs(sum - maxNumber * 2);

    if (difference) {
        std::cout << "No" << std::endl;
        std::cout << "Diff = " << difference << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
        std::cout << "Sum = " << maxNumber << std::endl;
    }
}