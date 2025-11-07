//Write a C program to calculate the average of array elements using formatted input/output.

#include<stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("how many elements in array?\n");
    scanf("%d", &n);
    float num[n];
    printf("Enter %d elments.\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
        sum += num[i];
    }
    float avg = sum/n;
    printf("The average of all the elements in the array is: %g\n", avg);
    return 0;
}