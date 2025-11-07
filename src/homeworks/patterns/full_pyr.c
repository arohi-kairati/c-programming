// to print full pyramid
/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/


#include<stdio.h>

int main()
{
    int n = 0;
    for(int i = 1; i <= 4; i++)
    {
        for(int k = 3; k >=i; k--)
        {
            printf(" ");
        }
        for(int j = 1; j <= i + n; j++)
        {
            printf("*");
        }
        n++;
        printf("\n");
    }
    int s = 5;
    for(int i = 1; i <= 3; i++)
    {
        for(int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for(int j = 1; j <= s; j++)
        {
            printf("*");
        }
        s = s - 2;
        printf("\n");
    }
    return 0;
}