//Write a C program to print all unique elements in an array.

#include<stdio.h>

int main()
{
    int count = 0;
    int arr[11] = { 1, 2, 2, 3, 5, 7, 7, 8, 8, 9, 10};
    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("%d ", arr[i]);
        }
        count = 0;
    }
    return 0;
}