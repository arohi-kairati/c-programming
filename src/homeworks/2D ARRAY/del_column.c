// To delete a column in an array

#include<stdio.h>

int main()
{
    int arr[4][4] = {{1, 2, 3, 5},
                   {5, 21, 87, 40},
                   {45, 8, 29, 57},
                   {4, 90, 10, 11}};
    int col;
    printf("Enter which column do you want to delete.\n");
    scanf("%d", &col);
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(j == col-1)
            {
                for(int k = j; k < 4; k++)
                {
                    arr[i][k] = arr[i][k+1];
                }
                break;
            }
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}