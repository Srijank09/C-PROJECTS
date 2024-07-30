#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess=0;
    srand(time(NULL)); // seeding random number based on current time

    printf("Welcome to the world of Guessing Numbers!\n");
    random = rand() % 100 + 1; //Generating between 0 to 100

    
    do {
        printf("Please enter your guess!(between 1 and 100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("Guess larger Number\n");
        }
        else if (guess > random)
        {
            printf("Guess smaller Number\n");
        }
        else
        {
            printf("Congratulations!!!, You have succesfully guessed the Number in %d attempts", no_of_guess);
        }

    }while (guess != random);

    printf("\nThanks for playing!");
    printf("\nDeveloped by: @Srijan");


}

    