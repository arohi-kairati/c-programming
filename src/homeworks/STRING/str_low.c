//To make the string in lowercase.

#include<stdio.h>

int main()
{
    char str[13] = "Arohi Kairati";
    for(int i = 0; i < 13; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            printf("%c", str[i] + 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}