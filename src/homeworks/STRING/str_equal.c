//To check if two strings are equal or not.

#include<stdio.h>

int main()
{
    char str1[5] = "Arohi";
    char str2[6] = "Arohi";
    
    //a b
    // if(a>b)
    // len = a
    // else len = b


    for(int i = 0; i < 6; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("Not Equal");
            break;
        }
        else if(i == 5)
            {
                printf("Equal");
                break;
            }
    }
}