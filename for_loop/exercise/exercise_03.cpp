#include <iostream>

int main () {
    int n;
    std::cin >> n;

    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for (int i = 0; i < n; i ++) {
        int number;
        std::cin >> number;

        if (number < 200) {
            p1 += 1;
        } else if (number < 400) {
            p2 += 1;
        } else if (number < 600) {
            p3 += 1;
        } else if (number < 800) {
            p4 += 1;
        } else {
            p5 += 1;
        }
    }

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << (p1 * 100.0) / n << '%' << std::endl;
    std::cout << (p2 * 100.0) / n  << '%' << std::endl;
    std::cout << (p3 * 100.0) / n  << '%' << std::endl;
    std::cout << (p4 * 100.0) / n  << '%' << std::endl;
    std::cout << (p5 * 100.0) / n  << '%' << std::endl;
}