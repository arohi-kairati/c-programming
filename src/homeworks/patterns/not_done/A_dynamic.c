/*

  *
 * *
 * *
*****
*   *
*   *

*/

#include<stdio.h>

int main()
{
    int n = 15, q = n;
    int l = 6;
    int d = 1;
    int h = 5;
    int s = 2, t = 3;
    int f = 4;
    int sp = 1;
    int x = 0;
    while(1)
    {
        if(l < n)
        {
            l = l + 3;
            d = d + 1;
            x = x + 1;
        }
        else
        {
            break;
        }
    }

    if(n % 3 != 0)
    {
        n = n+1;
    }

    for(int j = 0; j < n/3; j++)
            {
                printf(" ");
            }
            printf("*\n");
    n = q;
    for(int i = 0 ; i < q; i++)
    {
        if(i == s || i == t)
        {
            
            for(int k = 0; k < 2; k++)
            {
                for(int j = 0; j < d; j++)
                {
                    printf(" ");
                }
                printf("*");
                for(int j = 0; j < sp; j++)
                {
                    printf(" ");
                }
                printf("*\n");
            }
            d = d - 1;
            sp = sp + 2;
            s = s + 3;
            t = t + 3;
        }
        
        if(i == f)
        {
            for(int j = 0; j < x; j++)
            {
                printf(" ");
            }
            for(int j = 0; j < h; j++)
            {
                printf("*");
            }
            h = h + 2;
        printf("\n");
        f = f + 3;
        x = x - 1;
        }
    }
}