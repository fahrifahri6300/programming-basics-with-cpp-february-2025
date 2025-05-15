#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1111; i <= 9999; i++) {
        int num = i;
        bool isSpecialNum = true;

        while (num != 0) {
            const int digit = num % 10;

            if (digit == 0 || n % digit != 0) {
                isSpecialNum = false;
                break;
            }

            num = num / 10;
        }

        if (isSpecialNum) {
            std::cout << i << ' ';
        }
    }
}