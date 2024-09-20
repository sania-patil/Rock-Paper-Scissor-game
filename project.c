#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Function to get computer's choice
char getComputerChoice() {
    // Generate a random number (0, 1, or 2)
    int randNum = rand() % 3;
    if (randNum == 0) {
        return 'R'; // Rock
    } else if (randNum == 1) {
        return 'P'; // Paper
    } else {
        return 'S'; // Scissors
    }
}

// Function to determine the winner
char determineWinner(char playerChoice, char computerChoice) {
    if (playerChoice == computerChoice) {
        return 'T'; // Tie
    } else if ((playerChoice == 'R' && computerChoice == 'S') ||
               (playerChoice == 'P' && computerChoice == 'R') ||
               (playerChoice == 'S' && computerChoice == 'P')) {
        return 'P'; // Player wins
    } else {
        return 'C'; // Computer wins
    }
}

int main() {
    char username[50];
    char playerChoice, computerChoice, winner;
    srand(time(NULL)); 

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your username: ");
    scanf("%s", username);

    while (true) {
        printf("\n%s, enter your choice (R for Rock, P for Paper, S for Scissors, Q to quit): ", username);
        scanf(" %c", &playerChoice);

        // Check for valid input
        if (playerChoice == 'Q' || playerChoice == 'q') {
            break;
        } else if (playerChoice != 'R' && playerChoice != 'r' && playerChoice != 'P' && playerChoice != 'p' &&
                   playerChoice != 'S' && playerChoice != 's') {
            printf("Invalid choice! Please enter R, P, S, or Q.\n");
            continue;
        }

        // Get computer's choice
        computerChoice = getComputerChoice();

        // Determine the winner
        winner = determineWinner(playerChoice, computerChoice);

        // Display results
        printf("Computer chose: %c\n", computerChoice);
        if (winner == 'T') {
            printf("It's a tie!\n");
        } else if (winner == 'P') {
            printf("%s wins!\n", username);
        } else {
            printf("Computer wins!\n");
        }#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Function to get computer's choice
char getComputerChoice() {
    // Generate a random number (0, 1, or 2)
    int randNum = rand() % 3;
    if (randNum == 0) {
        return 'R'; // Rock
    } else if (randNum == 1) {
        return 'P'; // Paper
    } else {
        return 'S'; // Scissors
    }
}

// Function to determine the winner of a single round
char determineWinner(char playerChoice, char computerChoice) {
    if (playerChoice == computerChoice) {
        return 'T'; // Tie
    } else if ((playerChoice == 'R' && computerChoice == 'S') ||
               (playerChoice == 'P' && computerChoice == 'R') ||
               (playerChoice == 'S' && computerChoice == 'P')) {
        return 'P'; // Player wins
    } else {
        return 'C'; // Computer wins
    }
}

int main() {
    char player1[50], player2[50];
    int score1 = 0, score2 = 0;
    char playerChoice, computerChoice, winner;
    srand(time(NULL)); // Initialize random seed

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter Player 1's name: ");
    scanf("%s", player1);
    printf("Enter Player 2's name: ");
    scanf("%s", player2);

    for (int round = 1; round <= 3; round++) {
        printf("\nRound %d\n", round);
        printf("%s's turn (R for Rock, P for Paper, S for Scissors): ", player1);
        scanf(" %c", &playerChoice);

        // Get computer's choice
        computerChoice = getComputerChoice();

        // Determine the winner of the round
        winner = determineWinner(playerChoice, computerChoice);

        // Update scores
        if (winner == 'P') {
            printf("%s wins the round!\n", player1);
            score1++;
        } else if (winner == 'C') {
            printf("Computer wins the round!\n");
            score2++;
        } else {
            printf("It's a tie!\n");
        }

        // Display current scores
        printf("Current Score:\n%s: %d\n%s (Computer): %d\n", player1, score1, player2, score2);
    }

    // Determine the overall winner
    printf("\nGame Over\n");
    if (score1 > score2) {
        printf("%s wins the game with a score of %d!\n", player1, score1);
    } else if (score2 > score1) {
        printf("%s wins the game with a score of %d!\n", player2, score2);
    } else {
        printf("It's a tie game!\n");
    }

    return 0;
}


    }

    printf("Thanks for playing!\n");

    return 0;
}
