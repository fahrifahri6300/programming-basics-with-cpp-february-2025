#include <iostream>
#include <string>

int main() {
    int width, length, height;
    std::cin >> width >> length >> height;

    int volume = width * length * height;
    std::string input;

    while (std::cin >> input && input != "Done") {
        volume -= std::stoi(input);
        if (volume < 0) break;
    }

    if (volume < 0) {
        std::cout << "No more free space! You need " <<  -volume <<" Cubic meters more." << std::endl; 
    } else {
        std::cout << volume << " Cubic meters left." << std::endl; 
    }
}