//To check if a number is an armstrong number or not.

#include<stdio.h>
#include<math.h>

int main()
{
    int num, count = 0, d = 0, sum = 0;
    printf("Enter a number.");
    scanf("%d", &num);
    int i = num;
    while(num>0)
    {
        num = num/10;
        count++;
    }
    num = i;
    while(num>0)
    {
        d = num%10;
        sum += pow(d, count);
        num = num/10;
    }
    //printf("%d", sum);
    if(sum == i)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
}