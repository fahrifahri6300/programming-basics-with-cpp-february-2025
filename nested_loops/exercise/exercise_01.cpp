#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int current = 1;
    bool flag = false;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            if (current > n) {
                flag = true;
                break;
            }

            std::cout << current++ << (row == col ? '\n' : ' ');
        }
        if (flag) {
            break;
        }
    }
}