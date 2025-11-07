// To find the average of all the digits in a number entered by the user.


#include<stdio.h>
int main()
{
    int a =0, num; 
    double sum =0, c=0;
    printf("Enter a number.");
    scanf("%d", &num);
    while(num>0)
    {
        a = num%10;
        sum += a;
        c++;
        num = num/10;
    }
    printf("%f", sum/c);
}