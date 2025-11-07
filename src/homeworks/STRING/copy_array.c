//Write a C program to copy all elements of one array into another.

#include<stdio.h>
#include<string.h>

int main()
{
    char n[13] = "AROHI KAIRATI", n2[14];
    strcpy(n2, n);

    // for(int i = 0; i < 7; i++)                 LOOP METHOD [LOGIC BEHIND THE STRCPY() FUNCTION]
    // {
    //     n2[i] = n[i];   2   3   3   9   9 0   4    
    // }
    printf("The new array is:\n");
    for(int i = 0; i<14; i++)
    {
        printf("%c", n2[i]);
    }
}