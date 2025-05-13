#include <iostream>
#include <string>

int main() {
    int checkedBooksCount = 0;
    std::string favoriteBookTitle, currentBookTitle;
    std::getline(std::cin, favoriteBookTitle);
    std::getline(std::cin, currentBookTitle);

    while (currentBookTitle != favoriteBookTitle && currentBookTitle != "No More Books") {
        checkedBooksCount++;
        std::getline(std::cin, currentBookTitle);
    }

    if (currentBookTitle == favoriteBookTitle) {
        std::cout << "You checked " << checkedBooksCount <<" books and found it." << std::endl;
    } else {
        std::cout << "The book you search is not here!" << std::endl;
        std::cout << "You checked " << checkedBooksCount <<" books." << std::endl;
    }
}