#include <stdio.h>

void temp()
{
    printf("temp calls itself \n");
    temp();
}

void main()
{
     printf("Calls temp function \n");
     temp();
     printf("control is back to main \n");
}