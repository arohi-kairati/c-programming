//Write a C program to print all unique elements in an array.

#include<stdio.h>

int main()
{
    int n;
    printf("How many elements will your array contain?\n");
    scanf("%d", &n);
    int arr[n];
    int brr[n], c = 0;
    printf("Enter %d elements in the array.\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                c++;  
            }
        }
        if(c == 1 )
        {
            brr[k] = arr[i];
            k++;
        }
        c = 0;
    }

    for(int i = 0; i < k; i++)
    {
        printf("%d\t", brr[i]);
    }
}