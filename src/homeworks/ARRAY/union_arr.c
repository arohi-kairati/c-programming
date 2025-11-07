//Write a C program to find the union of two arrays

#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 7, 3, 1};
    int brr[] = {3, 9, 0, 5, 4, 2};
    int la = sizeof(arr)/sizeof(arr[0]);
    int lb = sizeof(brr)/sizeof(brr[0]);
    int crr[la + lb];
    int flag = 0, m = 0;
    for(int i = 0; i < la; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i] == crr[j])
            {
                flag = 1;
            }
        }
        if(flag != 1)
        {
            crr[m] = arr[i];
            m++;
        }
        flag = 0;
    }

    for(int i = 0; i < lb; i++)
    {        
        for(int j = 0; j < m; j++)
        {
            if(brr[i] == crr[j])
            {
                flag = 1;
            }
        }
        if(flag != 1)
        {
            crr[m] = brr[i];
            m++;
        }
        flag = 0;
    }

    for(int i = 0; i < m; i++)
    {
        printf("%d ", crr[i]);
    }
}