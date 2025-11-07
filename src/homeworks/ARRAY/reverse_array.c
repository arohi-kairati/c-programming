// To print the reverse array.

#include<stdio.h>

int main()
{
    float arr[5];
    printf("Enter the 5 values.\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("The reverse order is:\n");
    for(int i = 4; i >= 0; i--)
    {
        printf("%g \n", arr[i]);
    }
    return 0;
}