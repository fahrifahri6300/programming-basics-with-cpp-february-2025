#include <iostream>

int main () {
    int n;
    std::cin >> n;
    
    double result = 0;

    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        result += number;
    }

    std::cout << result << std::endl;
}