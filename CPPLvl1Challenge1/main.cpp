#include <iostream>
#include <cstdlib>

// This program generates a random fortune message from a predefined list of fortunes.

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int randomFortune = rand() % 10; // Generate a random number between 0 and 9

    if(randomFortune == 0) {
        std::cout << "You will have a great day!" << std::endl;
    } else if(randomFortune == 1) {
        std::cout << "Good news will come to you soon." << std::endl;
    } else if(randomFortune == 2) {
        std::cout << "You will find success in your endeavors." << std::endl;
    } else if(randomFortune == 3) {
        std::cout << "A surprise is waiting for you." << std::endl;
    } else if(randomFortune == 4) {
        std::cout << "You will meet someone special." << std::endl;
    } else if(randomFortune == 5) {
        std::cout << "Your hard work will pay off." << std::endl;
    } else if(randomFortune == 6) {
        std::cout << "You will travel to a new place." << std::endl;
    } else if(randomFortune == 7) {
        std::cout << "A financial opportunity is on the horizon." << std::endl;
    } else if(randomFortune == 8) {
        std::cout << "You will receive a compliment from someone." << std::endl;
    } else {
        std::cout << "You will have a chance to learn something new." << std::endl;
    }

    return 0;
}