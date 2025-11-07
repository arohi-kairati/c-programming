#include<stdio.h>

int main()
{
    long long n;    // Can only store 19 digits.
    int count = 0;
    printf("Enter a number.");
    scanf("%lu", &n);
    while(n>0)
    {
        n /= 10;
        count++;
    }
    printf("%d", count);
}