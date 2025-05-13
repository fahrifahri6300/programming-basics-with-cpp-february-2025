#include <iostream>
#include <string>

int main() {
    int width, length;
    std::cin >> width >> length;

    int pieces = width * length;
    std::string input;

    while (std::cin >> input && input != "STOP") {
        pieces -= std::stoi(input);
        if (pieces < 0) break;
    }

    if (pieces < 0) {
        std::cout << "No more cake left! You need " << -pieces <<" pieces more." << std::endl;
    } else {
        std::cout << pieces << " pieces are left." << std::endl;
    }
}