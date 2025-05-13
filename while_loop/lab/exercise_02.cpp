#include <iostream>
#include <string>

int main() {
    std::string username, correctPassword, enteredPassword;
    std::cin >> username >> correctPassword >> enteredPassword;

    while (enteredPassword != correctPassword) {
        std::cin >> enteredPassword;
    }

    std::cout << "Welcome " << username << "!" << std::endl;
}
