/*

*********
 *******
  *****
   ***
    *


    DYNAMIC

*/

#include<stdio.h>
int main()
{
    int row;
    int n = 1;
    printf("Enter the number of rows\n");
    scanf("%d", &row);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for(int j = 0; j < row + (row - n); j++)
        {
            printf("*");
        }
        n = n + 2;

        printf("\n");
    }
}