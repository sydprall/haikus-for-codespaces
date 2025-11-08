#include <stdio.h>

int main()
{
    int arr1[3][2], arr2[3][2], arr3[3][2], temp=1, temp2=1;

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           arr1[i][j]=3*temp+1;
           temp++;
           printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

     for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           arr2[i][j]=(temp2*temp2);
           temp2++;
           printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

     for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           arr3[i][j]=arr1[i][j]+arr2[i][j];
           printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

return 0;
}