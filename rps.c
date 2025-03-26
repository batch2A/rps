#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printChoice(int choice) {
    if (choice == 0) 
        printf("Rock");
    else if (choice == 1) 
        printf("Paper");
    else if (choice == 2)  
        printf("Scissors");
}

int main() {
    int userChoice, computerChoice;
    char playAgain;

    srand(time(0)); // Seed for random number generation

    do {
            printf("Rock, Paper, Scissors Game!\n");
            printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
            scanf("%d", &userChoice);

            if (userChoice < 0 || userChoice > 2) {
                printf("Invalid choice! Please choose 0, 1, or 2.\n");
                continue;
            }

            computerChoice = rand() % 3; // Random choice for computer

            printf("You chose: ");
            printChoice(userChoice);
            printf("\nComputer chose: ");
            printChoice(computerChoice);
            printf("\n");

            if (userChoice == computerChoice) {
                printf("It's a tie!\n");
            } 
            else if ((userChoice == 0 && computerChoice == 2) ||(userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
                printf("You win!\n");
            } 
            else {
             printf("You lose!\n");
            }

            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}