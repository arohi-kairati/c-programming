//Write a C program to check if two arrays are equal.

#include<stdio.h>

int main()
{
    int count = 0, firstlen, seclen;
    printf("enter the length of the first array!\n");
    scanf("%d", &firstlen);
    char arr1[firstlen];
    printf("enter the length of the second array!\n");
    scanf("%d", &seclen);
    char arr2[seclen];
    printf("Enter %d characters of the first array\n", firstlen);
    for(int i = 0; i < firstlen; i++)
    {
        scanf(" %c", &arr1[i]);
    }
    printf("Enter %d characters of the second array\n", seclen);
    for(int j = 0; j < seclen; j++)
    {
        scanf(" %c", &arr2[j]);
    }
    if(firstlen != seclen)
    {
        printf("These two arrays are not equal");
    }
    else
    {
        for(int k = 0; k < firstlen; k++)
        {
            if(arr1[k] == arr2[k])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count == firstlen)
        {
            printf("These arrays are equal!");
        }
        else
        {
            printf("These arrays are not equal");
        }
    }
    return 0;
}