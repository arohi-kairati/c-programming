// Take user input, store it in array and display.

#include<stdio.h>

int main()
{
    float arr[5];
    printf("Enter the 5 float values.");
    for(int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%g \n", arr[i]); // Use %g to remove unnecessary zeros from the float number.
    }
    return 0;
}