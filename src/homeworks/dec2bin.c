// convert Decimal to Binary

#include<stdio.h>

int main()
{
    int num, rem = 0, bin = 0, new_bin = 0, digit = 0;
    printf("Enter a decimal number to convert it into a binary number");
    scanf("%d", &num);
    int k = num;
    while(num>=1)
    {
        rem = num % 2;
        //printf("%d\n", rem);
        num = num / 2;
        //printf("%d\n", num);
        bin = bin*10 + rem;
        //printf("%d\n", bin);
        //num =0
        // bin = reversed binary number without last zeros
    }
    while(bin>0)
    {
        digit = bin % 10;
        new_bin = new_bin*10 + digit;
        bin = bin/10;
    }
    if (k % 2 == 0)
    {
        printf("%d", new_bin);
        while(k%2 == 0)
        {
            printf("0");
            k = k/2;
        }
    }
    else
    {
        printf("%d", new_bin);
    }
    return 0;
}