/*   *
    ***
   *****   */


#include<stdio.h>
int main()
{
    int n = 0;
    for(int i = 1; i <= 3; i++)
    {
        for(int k = 1; k <= 3-i; k++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i+n;j++ )
        {
            printf("*");
        }
        n++;
        printf("\n");
    }
}


/* 
 OR



#include <stdio.h>

int main() {
    int n = 0;
    for(int i = 1; i <= 4; i++)
    {
        n = i;
        for (int k = 3; k >= i; k--)
        {
            printf(" ");
        }
        for(int j = 1; j <= i+(n-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



*/