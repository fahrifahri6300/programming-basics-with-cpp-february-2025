#include <iostream>
#include <string>
#include <iomanip>

int main () {
    int tournamentCount, startingPoints;
    std::cin >> tournamentCount >> startingPoints;

    int tournamentWon = 0, pointsEarned = 0;

    for (int i = 0; i < tournamentCount; i++) {
        std::string stage;
        std::cin >> stage;

        if (stage == "W") {
            pointsEarned += 2000;
            tournamentWon += 1;
        } else if (stage == "F") {
            pointsEarned += 1200;
        } else {
            pointsEarned += 720;
        }
    }

    std::cout << "Final points: " << startingPoints + pointsEarned  << std::endl;
    std::cout << "Average points: " << pointsEarned / tournamentCount << std::endl;
    std::cout << std::fixed << std::setprecision(2) << tournamentWon * 100.0 / tournamentCount << "%" << std::endl;
}