#include <iostream>
#include <string>

int main() {
    constexpr int GOAL_STEPS = 10000;
    int totalSteps = 0, steps;
    std::string inputLine;

    while (totalSteps < GOAL_STEPS) {
        std::getline(std::cin, inputLine);

        if (inputLine == "Going home") {
            std::cin >> steps;
            totalSteps += steps;
            break;
        }

        totalSteps += std::stoi(inputLine);
    }

    if (totalSteps < GOAL_STEPS) {
        std::cout << GOAL_STEPS - totalSteps << " more steps to reach goal." << std::endl;
    } else {
        std::cout << "Goal reached! Good job!" << std::endl;
    }
}