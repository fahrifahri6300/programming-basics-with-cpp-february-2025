#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string studentName;
    std::cin >> studentName;

    int currentGradeLevel = 1;
    double totalGradesSum = 0.00;
    bool failedOnce = false;

    while (currentGradeLevel <= 12) {
        double gradeInput;
        std::cin >> gradeInput;

        if (gradeInput < 4.00) {
            if (failedOnce) {
                break;
            }

            failedOnce = true;
        } else {
            currentGradeLevel += 1;
            totalGradesSum += gradeInput;
        }
    }

    if (currentGradeLevel > 12) {
        std::cout << studentName << " graduated. Average grade: " << std::fixed << std::setprecision(2)
                  << totalGradesSum / 12 << std::endl;
    } else {
        std::cout << studentName << " has been excluded at " << currentGradeLevel << " grade" << std::endl;
    }
}