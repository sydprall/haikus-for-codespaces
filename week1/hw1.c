#include<stdio.h>
#include<stdbool.h>

int main(){
    char var1="p";
    int var2=25;
    float var3=5.08;
    bool var4=true;

    printf("Enter Last Initial, Age, Height, Are You A Student? And Press Enter");
    getchar();
    scanf("%c %d %f %c", &var1 &var2 &var3 &var4);
    printf("The first letter of the last name is: %c. The age is: %d. The height is: %f. Is a student? %c." var1, var2, var3, var4);

}