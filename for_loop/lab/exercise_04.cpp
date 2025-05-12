#include <iostream>

int main () {
    int n;
    std::cin >> n;

    int result = 1;

    for (int i = 0; i <= n; i += 2) {
        std::cout << result << std::endl;
        result = result * 2 * 2;
    }
}