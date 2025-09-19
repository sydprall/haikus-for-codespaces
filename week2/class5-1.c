#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main ()
{
    int position=1, newposition, roll, turns=0;

    srand(time(NULL));

    while(position !=100)
    {
        turns++;
        roll = rand()%6 +1;
        newposition = position + roll;
       
        printf("Turn = %d, Die roll = %d \n", turns, roll);
       
        if(newposition >100)
            position = position;
        else
            position = newposition;

        switch(position)
        {
            case 3:
                position = 48;
                printf("Used a ladder to position %d \n", position);
                break;
            case 23:
                position = 52;
                printf("Used a ladder to position %d \n", position);
                break;
            case 99:
                position = 1;
                printf("Used a snake to position %d \n", position);
                break;
            case 70:
                position = 5;
                printf("Used a snake to position %d \n", position);
                break;
        }

    }
    printf("Current position = %d. Turns = %d \n", position, turns);

}
