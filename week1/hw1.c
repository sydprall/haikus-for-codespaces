#include<stdio.h>
#include<stdbool.h>

int main(){
    char var1="p";
    int var2=25;
    float var3=5.08;
    bool var4=true;

    printf("Enter Last Initial AND Age AND Height in feet AND Are you a student? and press enter");
    getchar();
    scanf("%c", &var1);
    scanf("%d", &var2);
    scanf("%f", &var3);
    scanf("%c", &var4);
    printf("The first letter of the last name is: %c The age is: %d The height in feet is: %f Is a student? %c" var1, var2, var3, var4);

}