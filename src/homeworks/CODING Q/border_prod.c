//Given a 2D matrix of integers of size n×n, compute the product of all border elements.

#include<stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of rows and columns\n");
    scanf("%d", &r);
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements of the array\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }



    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }



    

    int k = 0;
    unsigned long int prod = 1;
    for(int i = 1; i <= 2; i++)
    {
        for(int j = 0; j < c; j++)
        {
            prod = prod * arr[k][j];
        }
        k = r - 1;
    }

    k = 0;
    for(int i = 1; i <= 2; i++)
    {
        for(int j = 1; j < r-1; j++)
        {
            prod = prod * arr[j][k];
        }
        k = c - 1;
    }

    printf("The product of all border elements is : %lu", prod);
}