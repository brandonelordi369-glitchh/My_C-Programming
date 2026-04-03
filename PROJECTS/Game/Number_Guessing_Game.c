/*
Write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize the random number Generator..
    srand(time(0));

    // Generating a random number between 1 to 100..
    int randomNumber = (rand() % 100) + 1;

    // Printing the random number..
    // printf("Random number: %d\n", &randomNumber);

    int n;
    int guesses = 0;

    do
    {
        printf("Guess the correct number: \n");
        scanf("%d", &n);

        guesses += 1;

        if (n < randomNumber)
        {
            printf("Enter Higher number`\n");
        }
        else if (n > randomNumber)
        {
            printf("Enter lower number`\n");
        }
        else
        {
            printf("\nVoila! You've found it! \n");
            break;
        }
    } while (n != randomNumber);

    printf("Total number of Guesses it took: %d \n", guesses);
    printf("The number was: %d\n", randomNumber);

    return 0;
}