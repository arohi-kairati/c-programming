//WAP to traverse a 2D array

#include<stdio.h>

int main()
{
    int arr[3][4];
    int(*p)[3] = arr;
    printf("Enter the elements in the array.\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
}