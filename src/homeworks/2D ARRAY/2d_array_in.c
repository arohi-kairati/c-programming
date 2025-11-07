//Input of 2d array and printing it. and performing other functions on them.

#include<stdio.h>

int main()
{
    int num[3][3], new[3][3];
    int sum = 0, prod = 1;
    printf("Enter the elements of a matrix.");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
            new[j][i] = num[i][j];
            sum += num[i][j];             //sum of all elements
            prod *= num[i][j];            //product of all elements
        }
    }
     printf("%d\n", sum);
     printf("%d\n", prod);
     for(int i = 0; i < 3; i++)
     {
         for(int j = 0; j < 3; j++)
         {
             printf("%d\t", num[i][j]);            //printing the elements
         }
         printf("\n");
     }
     for(int i = 0; i < 3; i++)
     {
         for(int j = 0; j < 3; j++)
         {
             printf("%d\t", new[i][j]);            //printing the transpose of the matrix
         }
         printf("\n");
     }

    for(int i = 0; i < 3; i++)
    {
        printf("%d ", num[i][i]);           //printing the diagonal elements
    }
    return 0;
}