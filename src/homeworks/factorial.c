// To find the factorial of a number.

// NOT OKAY FOR BIG NUMBER!!!!!!!!!!

#include<stdio.h>

int main()
{
    unsigned long long n, fact = 1;
    printf("Enter a number to get its factorial.");
    scanf("%llu", &n);
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%llu", fact);
}