#include<stdio.h>
#include"arraylib.h"

int findMaxIndex(int arr[], int size)
{
    int max = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}

int findMinIndex(int arr[], int size)
{
    int min = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[min] > arr[i])
        {
            min = i;
        }
    }
    return min;
}

float findAverage(int arr[], int size)
{
    float sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum/size;
}

void displayArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int arr[], int size)
{
    int c = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    for(int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
}

int linearSearch(int arr[], int size, int value)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}