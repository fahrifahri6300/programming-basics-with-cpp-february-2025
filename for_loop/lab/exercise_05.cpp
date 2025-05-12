#include <iostream>

int main () {
    std::string text;
    std::getline(std::cin, text);

    for (int i = 0; i < text.length(); i++) {
        std::cout << text[i] << std::endl;
    }
}