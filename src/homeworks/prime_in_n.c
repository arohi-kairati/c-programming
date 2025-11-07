//To check how many prime numbers lie between 1 and n.

#include<stdio.h>
int main()
{
    int n, c1 = 0, c2 = 0;
    printf("Enter the value of n to check how many prime numbers are there between 1 and n.\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                c1++;
            }
        }
        if(c1 == 2)
            {
                c2++;
            }
        c1 = 0;
    }
    printf("There are %d prime numbers between 1 and %d.\n", c2, n);
} 