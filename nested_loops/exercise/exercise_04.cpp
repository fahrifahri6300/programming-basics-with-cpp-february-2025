#include <iostream>
#include <string>

int main() {
    int juryCount;
    std::cin >> juryCount;

    std::string presentationTitle;
    double averagesSum = 0;
    int presentationCount = 0;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    while (std::getline(std::cin >> std::ws, presentationTitle)  && presentationTitle != "Finish") {
        double sumScores = 0.00;

        for (int i = 0; i < juryCount; i++) {
            double score;
            std::cin >> score;
            sumScores += score;
        }

        const double averageScore = sumScores / juryCount;
        averagesSum += averageScore;
        presentationCount += 1;

        std::cout << presentationTitle << " - " << averageScore << "." << std::endl;
    }

    std::cout << "Student's final assessment is " << averagesSum / presentationCount <<"." << std::endl;
}