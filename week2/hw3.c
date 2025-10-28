#include <stdio.h>

int b=5;

int addByValue(int a)
{
    a = a + b;

    return a;
}

int addByReference (int *c)
{
    *c = *c + b;

}

int main()
{
    int a=3;
    int *c = &a;

    printf("Add by Reference: %d\n", addByValue(a));
    printf("Pass by Reference %d\n", addByReference(*c));
}