#include<stdio.h>

int main()

{
    int var1 ,var2;

    printf("Enter the first number");
    scanf("%d",&var1);

    printf("Enter the second number");
    scanf("%d",&var2);

    printf("The sum of 2 numbers = %d",var1+var2);
    printf("The difference of 2 numbers = %d",var1-var2);
    printf("The product of 2 number = %d",var1*var2);
    printf("The dividend of 2 numbers = %.2f",(float)var1/var2);
    printf("The remainder of 2 numbers = %d", var1%var2);

    return 0;
}