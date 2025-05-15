#include <iostream>
#include <string>

int main() {
    std::string movieTitle;
    int totalTickets = 0, totalStudentTickets = 0, totalStandardsTickets = 0, totalKidTickets = 0;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::string ticketType;

    while (std::getline(std::cin >> std::ws, movieTitle) && movieTitle != "Finish") {
        int freeSeats;
        std::cin >> freeSeats;

        int totalTicketsForCurrentMovie = 0;

        while (std::cin >> ticketType && ticketType != "End") {
            if (ticketType == "student") ++totalStudentTickets;
            else if (ticketType == "standard") ++totalStandardsTickets;
            else if (ticketType == "kid") ++totalKidTickets;

            if (++totalTicketsForCurrentMovie == freeSeats) break;
        }

        totalTickets += totalTicketsForCurrentMovie;
        std::cout << movieTitle << " - " << totalTicketsForCurrentMovie * 100.00 / freeSeats << "% full."  << std::endl;
    }

    std::cout << "Total tickets: " << totalTickets << "" << std::endl;
    std::cout << totalStudentTickets * 100.00 / totalTickets << "% student tickets." << std::endl;
    std::cout << totalStandardsTickets * 100.00 / totalTickets << "% standard tickets." << std::endl;
    std::cout << totalKidTickets * 100.00 / totalTickets << "% kids tickets." << std::endl;
}