/*To print the largest digit in a number by user
eg. i/p = 345   o/p = 5*/

#include<stdio.h>

int main()
{
    int num, largest=0, dig = 0, d = -1;
    printf("Enter a number.");
    scanf("%d", &num);
    if(num<0)
    {
        num = - num;
    }
    while(num>0)
    {
        dig = num%10;
        num /= 10;
        if(dig > d)
        {
            largest = dig;
        }
        else
        {
            largest = d;
        }
        d = largest;
    }
    printf("%d", largest);
    return 0;
}