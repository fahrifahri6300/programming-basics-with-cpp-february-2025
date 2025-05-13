#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cin >> text;

    while (text != "Stop") {
        std::cout << text << std::endl;
        std::cin >> text;
    }
}