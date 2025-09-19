#include<stdio.h>

int main()
{
    int num;

    while (num!=0)
    {
        printf("Enter a number (zero to exit):");
        scanf("%d", &num);

        if(num %2 == 0)
        {
            printf("%d is even", num);
        }
        else
        {
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
            
        }
    }
return 0;
}
