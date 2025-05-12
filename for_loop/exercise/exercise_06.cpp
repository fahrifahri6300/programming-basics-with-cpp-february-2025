#include <iomanip>
#include <iostream>
#include <string>

int main () {
    std::string actorName, actorPointsString, judgeCountString;
    std::getline(std::cin, actorName);
    std::getline(std::cin, actorPointsString);
    std::getline(std::cin, judgeCountString);

    double actorPoints = std::stod(actorPointsString);
    const int judgeCount = std::stoi(judgeCountString);

    for (int i = 0; i < judgeCount && actorPoints < 1250.5; i++) {
        std::string judgeName, judgePointsString;
        std::getline(std::cin, judgeName);
        std::getline(std::cin, judgePointsString);

        const double judgePoints = std::stod(judgePointsString);
        actorPoints += static_cast<double>(judgeName.length()) * judgePoints / 2;
    }

    std::cout.setf(std::ios::fixed);
    std::cout.precision(1);

    if (actorPoints < 1250.5) {
        std::cout << "Sorry, " << actorName << " you need " << 1250.5 - actorPoints << " more!"  << std::endl;
    } else {
        std::cout << "Congratulations, " << actorName << " got a nominee for leading role with "
                  << actorPoints << "!"  << std::endl;
    }
}