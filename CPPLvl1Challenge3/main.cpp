#include <iostream>
#include <cstdlib>
#include <string>

//! 🫱 Rock Paper Scissors
//* This program simulates Rock Paper Scissors game
// This is to help me gain a better understanding of C++ strings, loops, and conditionals.

int main() {
    srand(time(0)); // Seed the random number generator

    // Declare variables
    int playerScore = 0;
    int computerScore = 0;
    int rounds = 5;

    std::cout << "Welcome to 🫱 Rock Paper Scissors!\n";
    std::cout << "You will play against the computer for " << rounds << " rounds.\n";
    std::cout << "The rules are simple: \n";
    std::cout << "1. Rock beats Scissors\n";
    std::cout << "2. Scissors beats Paper\n";
    std::cout << "3. Paper beats Rock\n";
    std::cout << "Let's start!\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Round\tPlayer\tComputer\n";
    std::cout << "----------------------------------------\n";
    
    // Loop for the number of rounds
    for(int i = 0; i < rounds; i++) {
        std::string playerChoice;

        std::cout << "Enter your choice(rock, paper, or scissors): ";
        std::cin >> playerChoice;
        tolower(playerChoice[0]); // Convert first character to lowercase

        // Generate computer choice
        int computerChoice = rand() % 3; // 0: rock, 1: paper, 2: scissors
        std::string computerChoiceStr;

        // Convert computer choice to string
        if(computerChoice == 0) {
            computerChoiceStr = "rock";
        } else if(computerChoice == 1) {
            computerChoiceStr = "paper";
        } else {
            computerChoiceStr = "scissors";
        }

        std::cout << "Round " << (i + 1) << ": " << playerChoice << "\tvs\t" << computerChoiceStr << "\n";

        // Determine the winner
        if(playerChoice == computerChoiceStr) {
            std::cout << "It's a tie! Both player chose: " << playerChoice << "\n";
        }
        else if(playerChoice == "rock" && computerChoiceStr == "scissors") {
            std::cout << "Congrats! You win this round!\n" << playerChoice << " beats " << computerChoiceStr;
        }
        else if(playerChoice == "scissors" && computerChoiceStr == "paper") {
            std::cout << "Congrats! You win this round!\n" << playerChoice << " beats " << computerChoiceStr;
        }
        else if(playerChoice == "paper" && computerChoiceStr == "rock") {
            std::cout << "Congrats! You win this round!\n" << playerChoice << " beats " << computerChoiceStr;
        }
        else {
            std::cout << "Sorry! You lost this round!\n" << computerChoiceStr << " beats " << playerChoice;
        };
        std::cout << "\n----------------------------------------\n";

        // Update scoreboard
        if(playerChoice == computerChoiceStr) {
            // No score change
        }
        else if(playerChoice == "rock" && computerChoiceStr == "scissors") {
            playerScore++;
        }
        else if(playerChoice == "scissors" && computerChoiceStr == "paper") {
            playerScore++;
        }
        else if(playerChoice == "paper" && computerChoiceStr == "rock") {
            playerScore++;
        }
        else {
            computerScore++;
        }

        // Display scoreboard
        std::cout << "Scoreboard: Player " << playerScore << " - Computer " << computerScore << "\n";
        std::cout << "----------------------------------------\n";

        // Check if it's the last round
        if(i == rounds - 1) {
            std::cout << "Final Score: Player " << playerScore << " - Computer " << computerScore << "\n";

            if(playerScore > computerScore) {
                std::cout << "Congrats! You are the winner!\n";
            }
            else if(playerScore < computerScore) {
                std::cout << "Sorry! You lost the game!\n";
            }
            else {
                std::cout << "It's a tie! Good Game!\n";
            };
            std::cout << "----------------------------------------\n";
            std::cout << "Thanks for playing! See you next time!\n";
            std::cout << "----------------------------------------\n";
            std::cout << "Press any key to exit...\n";

            std::cin.ignore();
            std::cin.get(); // Wait for user input before exiting
            return 0;
        }
    }

    return 0;
}