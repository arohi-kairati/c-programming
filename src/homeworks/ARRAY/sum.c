// Sum of array elements.

#include<stdio.h>

int main()
{
    int arr[5], sum = 0;
    printf("Enter the 5 values to find get their sum.\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d \n", sum);
    return 0;
}