//Write a C program to find the second largest element in an array.

#include<stdio.h>

int main()
{
    int arr[10] = {1, 5, 22, 88, 2, 5, 9, 2, 66, 40};
    int c = 0;

    //Sorting the array.
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    /*for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }*/

    //Printing the second largest element from the sorted array.
    printf("\n%d", arr[8]);
    return 0;
}