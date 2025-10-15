#include <stdio.h>
#include <math.h>
#include <time.h>

int random;

int randomguess()
{
    rand(random%101);
    return (random);
}


int main()
{
    int guess, attempt = 0, new_attempt=0;

    printf("Welcome to the Number Guessing Game!\nI'm thinking of a number between 1 and 100.\n");

    do
    {
        printf("Enter your guess\n");
        scanf("%d",&guess);

        randomguess(random);

        if(guess>random)
        {
            printf("Too high!\n");

            new_attempt=attempt+1;
            attempt=attempt+new_attempt;

        }

        else if(guess<random)
        {
            printf("Too low!\n");

            new_attempt=attempt+1;
            attempt=attempt+new_attempt;
        } 
        
        else if((guess>100) || (guess<1))
        {
            printf("Invalid number\n");

            new_attempt=attempt+1;
            attempt=attempt+new_attempt;
        }

        else
        {
            new_attempt=attempt+1;
            attempt=attempt+new_attempt;

            printf("Correct! You guessed it in %d attempts!",attempt);
        }
    } while (guess!=random);
    
    return 0;
}