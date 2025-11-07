//Bubble sorting in ARRAY [ascending]

#include<stdio.h>

int main()
{
    int arr[] = {2,20,1,75,3,9,5};
    int empty = 0;
    for(int i = 0; i<7; i++)
    {
        for(int j = i+1; j<7; j++)
        {
            if(arr[i]>arr[j])      // > for ascending
            {
                empty = arr[i];
                arr[i] = arr[j];
                arr[j] = empty;
            }
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
}
