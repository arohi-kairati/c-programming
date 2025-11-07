//To make the string in uppercase.

#include<stdio.h>

int main()
{
    char str[13] = "Arohi Kairati";
    for(int i = 0; i < 13; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}