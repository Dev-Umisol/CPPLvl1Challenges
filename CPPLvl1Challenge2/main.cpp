#include <iostream>
#include <cstdlib>

//* This program generates a random number between 1 and 6, simulating a dice roll.

int main() {
    srand(time(0)); // Seed the random number generator

    int randomDiceRoll = rand() % 6 + 1; // Generate a random number between 1 and 6
    int userGuess;

    std::cout << "Welcome to the Dice Roll Game!\n";
    std::cout << "Guess the number on the dice (1-6): ";

    // Prompt the user for their guess
    std::cin >> userGuess;

    // Validate user input
    std::cout << "You guessed: " << userGuess << '\n';
    std::cout << "The dice rolled: " << randomDiceRoll << '\n';

    // Check if the user's guess matches the random dice roll
    if (userGuess == randomDiceRoll) {
        std::cout << "Congratulations! You guessed it right!\n";
    } else {
        std::cout << "Sorry, better luck next time!\n";
    }
    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}