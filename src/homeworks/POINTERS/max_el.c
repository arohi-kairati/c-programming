//to find the max element of the array using opointers.

#include<stdio.h>

int main()
{
    int arr[] = {1, 6, 89, 3, -4, 6};
    int *p = arr;
    int max = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < len; i++)
    {
        if(max < *(p+i))
        {
            max = *(p+i);
        }
    }
    printf("%d\n", max);
}