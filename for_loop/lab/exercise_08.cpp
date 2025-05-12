#include <iostream>
#include <climits>

int main () {
    int n;
    std::cin >> n;

    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;

        if (number > maxNumber) {
            maxNumber = number;
        }
        if (number < minNumber) {
            minNumber = number;
        }
    }

    std::cout << "Max number: " << maxNumber << std::endl;
    std::cout << "Min number: " << minNumber << std::endl;
}