#include <stdio.h>

int main()
{
    int choice, num1;
    

    printf("1. Square \n 2. Cube \n 3. Even/Odd"),
    printf("Enter a choice:");

    scanf ("%d", &choice);

    printf("Enter num1: ");
    scanf("%d", &num1);

    switch(choice)
    {
        case 1:
        printf("Square = %d", num1*num1);
        break;

        case 2:
        printf("Cube = %d", num1*num1*num1);
        break;

        case 3:
        if (num1%2 == 0)
        {
            printf("Even\n");
        }
        else
            printf("Odd");
        break;

        default:
            printf("Invalid Entry");
        
    }
}