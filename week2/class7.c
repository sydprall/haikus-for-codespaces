#include <stdio.h>

int function6(int n)
{
    printf("Value of n passed from main = %d",n);
    int result = n*2;
    return result;
}

int function5(int n)
{
    int result = function6(n);
    return result;
}

int function4(int n)
{
    int result = function5(n);
    return result;
}

int function3(int n)
{
    int result = function4(n);
    return result;
}

int function2(int n)
{
    int result = function3(n);
    return result;
}

int function1(int n)
{
    int result = function2(n);
    return result;
}

int main ()
{
    int result = function1 (7);
    printf("Result returned from function 6 = %d",result);
}
