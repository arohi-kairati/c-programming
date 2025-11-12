//Write a C program to rotate an array by k positions.

#include<stdio.h>

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
    int k, n;
    int size = sizeof(arr) / sizeof(arr[0]);
    int c[size];
    printf("By how many positions do you want to rotate the array?");
    scanf("%d", &k);

    //storing the initial elements till k
    for(int i = 0; i < size - k; i++)
    {
        c[i] = arr[i];
    }


    // shifting the elements after k to the front
    int j = k;
    for(int i = 0; i < k; i++)
    {
        arr[i] = arr[size - j];
        j--;
    }


    // putting the stored elements till k at last
    for(int i = 0; i < size - k; i++)
    {
        arr[i+k] = c[i];
    }


    // printing the rotated array
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}