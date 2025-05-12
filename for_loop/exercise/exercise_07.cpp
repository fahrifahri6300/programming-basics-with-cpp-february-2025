#include <iostream>

int main () {
    int groupCount;
    std::cin >> groupCount;

    int musalaClimbers = 0, montBlancClimbers = 0, kilimanjaroClimbers = 0, k2Climbers = 0, everestClimbers = 0;

    for (int i = 0; i < groupCount; i++) {
        int groupSize;
        std::cin >> groupSize;

        if (groupSize < 6) {
            musalaClimbers += groupSize;
        } else if (groupSize < 13) {
            montBlancClimbers += groupSize;
        } else if (groupSize < 26) {
            kilimanjaroClimbers += groupSize;
        } else if (groupSize < 41) {
            k2Climbers += groupSize;
        } else {
            everestClimbers += groupSize;
        }
    }

    const int totalClimbers = musalaClimbers + montBlancClimbers + kilimanjaroClimbers + k2Climbers + everestClimbers;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << musalaClimbers * 100.0 / totalClimbers << '%' << std::endl;
    std::cout << montBlancClimbers * 100.0 / totalClimbers << '%' << std::endl;
    std::cout << kilimanjaroClimbers * 100.0 / totalClimbers << '%' << std::endl;
    std::cout << k2Climbers * 100.0 / totalClimbers << '%' << std::endl;
    std::cout << everestClimbers * 100.0 / totalClimbers << '%' << std::endl;
}