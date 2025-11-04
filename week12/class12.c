#include <stdio.h>

int main ()
{
    int square_arr[10], cube_arr[10], even_arr[3][3], odd_arr[3][3];

    for (int i=0;i<10;i++)
    {
        square_arr[i]= (i+1)*(i+1);
        cube_arr[i]= i*i*i;
    }

    int even = 2, odd = 1;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            even_arr[i][j] = even;
            odd_arr[i][j] = odd;
            even = even+2;
            odd = odd+2;
        }
    }

    printf("1D arrays are: \n");
    printf("First Array: ");
        for(int i=0;i<10;i++)
        {
            printf("%d ", square_arr[i]);
        }
        printf("\n");

    printf("\nSecond Array: ");
        for(int i=0;i<10;i++)
        {
            printf("%d ", cube_arr[i]);
        }
        printf("\n");

    printf("2d arrays are:\n");
    printf("First 2D Array: \n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", even_arr[i][j]);
        }
        printf("\n");
    }

    printf("Second 2D Array: \n");
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", odd_arr[i][j]);
        }
        printf("\n");
    }
return 0;
}