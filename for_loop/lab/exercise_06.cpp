#include <iostream>

int main () {
    std::string text;
    std::getline(std::cin, text);

    int result = 0;

    for (const char letter : text) {
        if (letter == 'a') {
            result += 1;
        } else if (letter == 'e') {
            result += 2;
        } else if (letter == 'i') {
            result += 3;
        } else if (letter == 'o') {
            result += 4;
        } else if (letter == 'u') {
            result += 5;
        }
    }

    std::cout << result << std::endl;
}