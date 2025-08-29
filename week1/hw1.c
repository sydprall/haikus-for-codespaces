#include<stdio.h>
#include<stdbool.h>

int main(){
    char lastInitial;
    int age=0;
    float height=0;
    bool isStudent=true

    printf("Enter Last Initial, Age, Height, Are You A Student? And Press Enter");
    getchar();
    scanf("%c %d %f %c", &lastInitial &age &height &isStudent);
    printf("The first letter of the last name is: %c. The age is: %d. The height is: %f. Is a student? %c." lastInitial, age, height, isStudent);

}