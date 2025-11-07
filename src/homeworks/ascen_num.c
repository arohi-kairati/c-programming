#include<stdio.h>
// #include<math.h>     This was needed in the logic that i used before.

int main() {
    int n, t=0, s=0;
    printf("Enter a number.\n");
    scanf("%d", &n);
    for(int i = 0; i <= 10; i++)
    {
        t = n;
        while(t>0)
        {
            if(i==t%10)
            {
                s = s*10 + i;
            }
            t = t/10;
        }
    }
    printf("%d \n", s);
    return 0;
}




/*
WRONG LOGIC !!!!!


int n, digit = 0, d=9, number = 0, smallest =0, c=0;
    printf("Enter a number");
    scanf("%d", &n);
    int new_n = n, other_n =n;
    while(n>0)
    {
        n = n/10;
        c++;
    }
    for(int i = pow(10,c-1); i>=1; i /= 10)
    {
        while(new_n>0)
        {
            digit = new_n%10;
            if(digit<d)
            {
                smallest = digit;
                d = digit;
            }
            else
            {
                smallest = d
            }
            new_n = new_n/10;
        }
        number += smallest*i;
        new_n = other_n/10;
    }
    printf("%d",number);
*/