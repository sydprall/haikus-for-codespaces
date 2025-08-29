#include<stdio.h>

int main()

{
    int min;

    printf("Enter the number of minutes:");
    scanf("%d",&min);

    printf("The number of hours = %d The number of mins = %d", min/60,min%60);

}