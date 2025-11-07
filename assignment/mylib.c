#include"mylib.h"
#include<math.h>

int isArmstrong(int num)
{
    int t = num, n = num, rem, c = 0, sum = 0;
    while(num > 0)
    {
        num = num / 10;
        c++;
    }
    while(t > 0)
    {
        rem = t % 10;
        sum = sum + pow(rem, c);
        t = t / 10;
    }
    return sum == n;
}

int reverse(int num)
{
    int rem, rev = 0;
    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}

int isAdams(int num)
{
    return (pow(reverse(num), 2) == reverse(num * num));
}

int isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isPrimePalindrome(int num)
{
    return reverse(num) == num && isPrime(num);
}