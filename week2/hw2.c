#include<stdio.h>

int main()
{
    int num, sum=0, counteven=0, countodd=0;

    while (num!=0)
    {
        printf("Enter a number (zero to exit):");
        scanf("%d", &num);
       

        sum+=num;

        if(num %2 == 0)
        {
            counteven++;
            printf("%d is even", num);
        }
        else
        {
            countodd++;
            printf("%d is odd", num);
        }

        if(num>0)
        {
            printf(" and positive. ");
        }
        else
        {
            printf(" and negative");
        }

        if (num == 0)
        {
            printf ("Sum of numbers is %d. Count of event numbers is %d. Count of odd numbers is %d. \n", sum, counteven, countodd);
        }
    }
return 0;
}
