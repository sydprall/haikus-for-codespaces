#include <stdio.h>

void add_two1Darray(int size1, int p[size1], int size2, int q[size2])
{
    int r[size1];

    for(int i=0;i<size1;i++)
    {
        r[i]=p[i]+q[i];
        printf("%d ", r[i]);
    }
}

void diff_2Darray( int rows, int cols, int p[rows][cols], int q[rows][cols])
{
    int r[rows][cols];

    for(int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            r[i][j] = p[i][j] - q[i][j];
            printf("%d", r[i][j]);
        }
        printf("\n");
    }
}

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

add_two1Darray(10,square_arr,10,cube_arr);
diff_2Darray(3,3,even_arr,odd_arr);

return 0;
}