#include <iostream>

int main() {
    int n, solutions = 0;
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j  <= n; j++) {
            for (int k = 0; k  <= n; k++) {
                if (i + j + k == n) {
                    solutions++;
                }
            }
        }
    }

    std::cout << solutions << std::endl;
}