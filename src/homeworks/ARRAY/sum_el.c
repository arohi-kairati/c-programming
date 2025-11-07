//Write a C program to calculate the sum of elements in an array.

#include<stdio.h>

int main()
{
    int arr[5] = {34, 56, 2, 54, 454};
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("The sum f all elements present in the array is : %d\n", sum);
    return 0;
}