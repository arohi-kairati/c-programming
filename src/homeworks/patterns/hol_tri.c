/*

    *
   * *
  *   *
 *     *
*********

*/

#include<stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows.");
    scanf("%d", &rows);
    int n = rows - 1;
    int m = 1;

    for(int k = 0; k < n; k++)
    {
        printf(" ");
    }
    n--;

    for(int i = 0; i < rows; i++)
    {
        if(i == 0)
        {
            printf("*\n");
        }

        if(i == rows - 2)
        {
            for(int j = 0; j < rows + (rows - 1); j++)
            {
                printf("*");
            }
            printf("\n");
            break;
        }

        for(int k = 0; k < n; k++)
        {
            printf(" ");
        }
        n--;

        printf("*");
        for(int j = 0; j < m; j++)
        {
            printf(" ");
        }
        printf("*\n");
        m = m + 2;
    }
    return 0;
}