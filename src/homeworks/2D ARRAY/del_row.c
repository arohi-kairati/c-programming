//to delete a row from the 2d matrix

#include<stdio.h>

int main()
{
    int arr[4][3] = {{2, 2, 4},
                     {4, 8, 6},
                     {9, 0, 1},
                     {4, 67, 90}};
    int row;
    printf("Enter which row do you want to delete?\n");
    scanf("%d", &row);
    for(int i = 0; i < 4; i++)
    {
        if(i == row-1)
        {
            for(int j = i; j < 4; j++)
            {
                for(int k = 0; k < 3; k++)
                {
                    arr[j][k] = arr[j+1][k];
                }
            }
        }
    }
    for(int i = 0; i < 4-1; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}