#include<stdio.h>

int main()
{
    int arr[11] = {12, 34, 67, 91, 22, 2, 4, 7, 9, 28, 37};
    int del, c = 0;
    printf("Enter which element do you want to delete from the array.");
    scanf("%d", &del);
    int size = 11;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == del)
        {
            for(int j = i; j < size-1; j++)
            {
                arr[j] = arr[j+1];
            }
        }
        else
        {
            c++;
        }
    }
    if(c != size)
    {
        for(int i = 0; i < size-1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("It isn't present in the array.");
    }
    return 0;
}