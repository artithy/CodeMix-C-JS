#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, userGuess, attempts = 0;

  
    srand(time(0));
    secretNumber = rand() % 100 + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess what it is?\n");

 
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess > secretNumber) {
            printf("Too high! Try again.");
        } else if (userGuess < secretNumber) {
            printf("Too low! Try again.");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (userGuess != secretNumber);

    return 0;
}
