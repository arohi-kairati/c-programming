/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/

#include<stdio.h>

int main()
{
    int rows = 9;
    int n = (rows-1)/2;
    int m = n;
    int s = 1;
    int sp = 1;
    for(int i = 0; i < m + 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf(" ");
        }
        n--;


        if(i == 0)
        {
            printf("*\n");
        } 
        else
        {
            printf("*");
            for(int j = 0; j < sp; j++)
            {
                printf(" ");
            }
            printf("*\n");
            sp = sp + 2;
        }
    }
     
    sp = sp - 2;
    for(int i = m + 2 ; i < m + m + 2; i++)
    {
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }
        printf("\n");

        if(s != m)
        {
            s++;
        }

        printf("*");
        for(int j = 0; j < sp; j++)
        {
            printf(" ");
        }
        printf("*");
        sp = sp - 2;
    }

    return 0;
}