#include <iostream>

int main() {
    int totalFloors, roomsPerFloor;
    std::cin >> totalFloors >> roomsPerFloor;

    for (int floor = totalFloors; floor >= 1; --floor) {
        char prefix;

        if (floor == totalFloors) {
            prefix = 'L';
        } else if (floor % 2 == 0) {
            prefix = 'O';
        } else {
            prefix = 'A';
        }

        for (int room = 0; room < roomsPerFloor; ++room) {
            std::cout << prefix << floor << room << (room + 1 < roomsPerFloor ? ' ' : '\n');
        }
    }
}