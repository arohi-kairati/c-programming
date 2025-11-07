//Write a C program to merge two sorted arrays into one sorted array.

#include<stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 10, 11}, brr[6] = {1, 4, 5, 7, 9, 13};
    int size_a = sizeof(arr) / sizeof(arr[0]);
    int size_b = sizeof(brr) / sizeof(brr[0]);
    int ab[size_a + size_b];
    int i = 0, j = 0;
    int x;
    for(int k = 0; k < (size_a + size_b); k++)
    {
        if(arr[i] < brr[j])
        {
            ab[k] = arr[i];
            i++;
        }
        else if(arr[i] > brr[j])
        {
            ab[k] = brr[j];
            j++;
        }
        else if(arr[i] == brr[j])
        {
            ab[k] = arr[i];
            i++;
        }
        if(i == size_a)
        {
            x = k + 1;
            for(int n = j; n < size_b; n++)
            {
                ab[x] = brr[n];
                x++;
            }
            break;
        }
        if(j == size_b)
        {
            x = k + 1;
            for(int n = i; n < size_a; n++)
            {
                ab[x] = arr[n];
                x++;
            }
            break;
        }
    }
    for(int k = 0; k < (size_a + size_b); k++)
    {
        printf("%d ", ab[k]);
    }
}