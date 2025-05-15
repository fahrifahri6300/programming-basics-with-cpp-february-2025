#include <iostream>

int main() {
    int start, end;
    std::cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int num = i, evenSum = 0, oddSum = 0;
        bool isEven = false;

        while (num != 0) {
            const int digit = num % 10;

            if (isEven) {
                evenSum += digit;
            } else {
                oddSum += digit;
            }

            num /= 10;
            isEven = !isEven;
        }

        if (evenSum == oddSum) {
            std::cout << i << ' ';
        }
    }
}