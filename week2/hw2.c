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
            printf("positive");
        }
        else
        {
            printf("negative");
        }
    }
return 0;
}
