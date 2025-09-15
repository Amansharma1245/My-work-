#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
char get_computer_choice() {
    int random_num = rand() % 3; // Generate a random number between 0 and 2
    switch (random_num) {
        case 0: return 'r'; // Rock
        case 1: return 'p'; // Paper
        case 2: return 's'; // Scissors
    }
    return 'r'; // Default case
}

// Function to determine the winner
const char* determine_winner(char user_choice, char computer_choice) {
    if (user_choice == computer_choice) {
        return "It's a tie!";
    } else if ((user_choice == 'r' && computer_choice == 's') ||
               (user_choice == 'p' && computer_choice == 'r') ||
               (user_choice == 's' && computer_choice == 'p')) {
        return "You win!";
    } else {
        return "You lose!";
    }
}

int main() {
    char user_choice;
    char computer_choice;

    // Seed the random number generator
    srand(time(NULL));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice (r for rock, p for paper, s for scissors): ");
    scanf(" %c", &user_choice);

    if (user_choice != 'r' && user_choice != 'p' && user_choice != 's') {
        printf("Invalid choice! Please run the program again and choose r, p, or s.\n");
        return 1;
    }

    computer_choice = get_computer_choice();

    printf("You chose: %c\n", user_choice);
    printf("Computer chose: %c\n", computer_choice);

    printf("%s\n", determine_winner(user_choice, computer_choice));

    return 0;
}