//Write a C program to implement binary search on an array.

#include<stdio.h>

int main()
{
    int arr[10] = {2, 3, 1, 7, 4, 9, 5, 8, 10, 6};
    int c = 0, target = 7, mid;
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    int low = 0, high = 9;
    while(low <= high)
    {
        mid = (high + low)/2;
        if(target == arr[mid])
        {
            printf("present on %d index", mid);
            break;
        }
        else if(target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}