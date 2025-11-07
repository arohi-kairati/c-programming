// Matrix multipliaction using 2D arrays.

#include<stdio.h>

int main()
{
    int r1, r2, c1, c2;

    printf("Enter the no. of rows in first matrix\n");
    scanf("%d", &r1);
    printf("Enter the no. of columns in first matrix\n");
    scanf("%d", &c1);
    printf("Enter the no. of rows in 2nd matrix\n");
    scanf("%d", &r2);
    printf("Enter the no. of columns in 2nd matrix\n");
    scanf("%d", &c2);
    int a[r1][c1], b[r2][c2];
    int mult[r1][c2];

    for(int n = 0; n < r1; n++)
    {
        for(int m = 0; m < c2; m++)
        {
            mult[n][m] = 0;
        }
    }
    


    //input of the 1st matrix

    printf("Enter the elements of the 1st array\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //input of the 2nd matrix
    
    printf("Enter the elements of the 2nd array\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //multiplication

    if(c1 == r2)
    {
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                for(int k = 0; k < r2; k++)
                {
                    mult[i][j] += a[i][k] * b[k][j];
                }
                printf("%d\t", mult[i][j]);
            }
        }
    }
    else
    {
        printf("Matrix multiplication is not possible.");
    }
}