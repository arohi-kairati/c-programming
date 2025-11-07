//To find the sum of two binary number.
// 0 + 0 = 0
// 0 + 1 = 1
// 1 + 1 = 0  remainder = 1

#include<stdio.h>
int main()
{
    int n1, n2, r, rem1 = 0, rem2 = 0, sum = 0, num = 0;
    printf("Enter two binary numbers.");
    scanf("%d", &n1);
    scanf("%d", &n2);
    while(n1 > 0 && n2 > 0)
    {
        rem1 = n1 % 10;
        rem2 = n2 % 10;
        if(rem1 == 0 && rem2 == 0)
        {
            sum += 0 + r;
            r = 0;
        }
        else if((rem1 == 0 && rem2 == 1) || (rem1 == 0 && rem2 == 1))
        {
            sum += 1 + r;
            r = 0;
        }
        else if(rem1 == 1 && rem2 == 1)
        {
            sum += 0;
            r = 1;
        }
        num = num * 10 + sum;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }
    printf("sum is: %d", num);
}