#include <iostream>
#include <string>
#include <iomanip>

int main () {
    int n, salary;
    std::cin >> n >> salary;

    for (int i = 0; i < n && salary > 0; i++) {
        std::string website;
        std::cin >> website;

        if (website == "Facebook") {
            salary -= 150;
        } else if (website == "Instagram") {
            salary -= 100;
        } else if (website == "Reddit") {
            salary -= 50;
        }
    }

    if (salary <= 0) {
        std::cout << "You have lost your salary." << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(0) << salary << std::endl;
    }
}