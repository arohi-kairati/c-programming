//To check if a number is prime or not.

#include<stdio.h>
int main()
{
    int num, count= 0;
    printf("Enter a number to check if it is a prime number or not.\n");
    scanf("%d", &num);
    for(int i = 1; i<= num ; i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("It is not a prime number.\n");
    }
}