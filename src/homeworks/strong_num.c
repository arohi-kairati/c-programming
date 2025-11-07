//To check if the number is strong (krishnamurthy) or not.

#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number to check if it is a strong number.");
    scanf("%d", &num);
    int t = num;
    while(num > 0)
    {
        int fact = 1;
        int rem = num % 10;
        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == t)
    {
        printf("It is a STRONG number.");
    }
    else
    {
        printf("It is not a STRONG number");
    }
}