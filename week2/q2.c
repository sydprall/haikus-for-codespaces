#include <stdio.h>

void main()

{
    int temp=1, n, choice;
    printf("Enter a number:");
    scanf("%d", &n);
    
    do
    {

    printf("1. Odd\n 2. EvenSquare \n 3. *print \n 4. Exit \n");
    scanf ("%d, &choice");


        if (choice ==1)
        {
            while (temp<=n)
            {
                if(temp%2!=0)
                    printf("%d",temp);
            temp++;
            }
        }

        if (choice ==2)
        {
            if(n%2==0)
                printf("Square of n = %d", n*n);
            else
                printf("N is not divisible by 2");
        }

        if (choice ==3)
        {
            temp = n;
            while(temp>0)
            {
                printf("*");
                temp--;
            }

        }

        else
            printf("Invalid Choice");
     }while (choice!=4);

}