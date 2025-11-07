//Write a C program to display all prime numbers between 1 and 100.

#include<stdio.h>

int main()
{
    int count = 0;
    printf("All the prime numbers between 1 and 100 are:\n");
    for(int i = 1; i <= 100; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d\n", i);
        }
        count = 0;
    }
    return 0;
}