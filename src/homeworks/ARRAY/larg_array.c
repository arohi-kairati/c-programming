//Write a C program to find the largest element in an array.

#include<stdio.h>

int main()
{
    int elements;
    printf("How many elements to put in an array?");
    scanf("%d", &elements);
    int num[elements];
    printf("Enter %d integer numbers to store them in a array, so i can tell you which\n element is the largest.", elements);
    for(int i = 0; i< elements; i++)
    {
        scanf("%d", &num[i]);
    }
    int largest = num[0];
    for(int i = 0; i < elements; i++)
    {
        if(num[i]> largest)
        {
            largest = num[i];
        }
    }
    printf("The largest number in this array is %d", largest);
}