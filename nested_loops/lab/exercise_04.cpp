#include <iostream>

int main() {
    int start, end, magicNum;
    std::cin >> start >> end >> magicNum;

    int comboCount = 0;
    bool found = false;

    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            comboCount++;

            if (i + j ==  magicNum) {
                std::cout << "Combination N:" << comboCount
                          << " (" << i << " + "<< j <<" = " << magicNum <<")" << std::endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        std::cout <<  comboCount << " combinations - neither equals " << magicNum << std::endl;
    }
}