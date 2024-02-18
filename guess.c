#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have generated a random number between 1 and 100.\n");
    printf("Can you guess what it is?\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You have correctly guessed the number.\n");
            break;
        }
    }

    return 0;
}