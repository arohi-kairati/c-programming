// To print the value of the counter variable at last iteration.

#include<stdio.h>

int main()
{
    int last_val = 0;
    for(int i = 0; i <= 10; i++)
    {
        last_val = i;
    }
    printf("%d \n", last_val);
}