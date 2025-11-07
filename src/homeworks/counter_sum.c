//To print the sum of counter with each iteration.

#include<stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i <= 100; i++)
    {
        sum += i;
    }
printf("%d \n", sum);
}