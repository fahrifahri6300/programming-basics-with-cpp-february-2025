#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int maxPoorGrades;
    std::cin >> maxPoorGrades;

    std::string problemName, lastProblemName;
    std::getline(std::cin >> std::ws, problemName);

    int totalGradesCount = 0, totalGradesSum = 0, poorGradesCount = 0;

    while (problemName != "Enough") {
        int grade;
        std::cin >> grade;

        if (grade <= 4) {
            ++poorGradesCount;
            if (poorGradesCount == maxPoorGrades) {
                break;
            }
        }

        ++totalGradesCount;
        totalGradesSum += grade;
        lastProblemName = problemName;

        std::getline(std::cin >> std::ws, problemName);
    }

    if (poorGradesCount != maxPoorGrades) {
        std::cout << "Average score: " << std::fixed << std::setprecision(2)
                  << static_cast<double>(totalGradesSum) / totalGradesCount << std::endl;
        std::cout << "Number of problems: " << totalGradesCount << std::endl;
        std::cout << "Last problem: " << lastProblemName << std::endl;
    } else {
        std::cout << "You need a break, " << poorGradesCount << " poor grades." << std::endl;
    }

    return 0;
}
