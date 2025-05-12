#include <iostream>
#include <cmath>

int main () {
    int n;
    std::cin >> n;

    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        leftSum += number;
    }

    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        rightSum += number;
    }
    
    if (leftSum == rightSum) {
        std::cout << "Yes, sum = " << leftSum << std::endl;
    } else {
        std::cout << "No, diff = " << std::abs(leftSum - rightSum) << std::endl;
    }
}