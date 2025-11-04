#include <stdio.h>

int main()
{
    int arr1 [3][2], arr2[4];

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<4;i++)
    {
        arr2[i]= (i+1)*(i+1);
    }
    for (int i=0;i<4;i++)
    {
        printf("%d ", arr2[4]);
    }
return 0;
}