#include<stdio.h>

int main()

{
    int var1 ,var2;

    printf("Enter the first number");
    scanf("%d",&var1);

    printf("Enter the second number");
    scanf("%d",&var2);

    printf("lt=%d \n", var1<var2);
    printf("let=%d \n", var1<=var2);
    printf("gt=%d \n", var1>var2);
    printf("get=%d \n", var1>=var2);
    printf("eq=%d \n", var1==var2);
    printf("neq=%d \n", var1!=var2);


}