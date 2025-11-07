//To reverse the string.

#include<stdio.h>

int main()
{
    char str[13] = "Arohi Kairati";
    for(int i = 12; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}