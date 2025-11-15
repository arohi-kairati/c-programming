//remove duplicate and sort

#include<stdio.h>

int main()
{
    int l, temp;

    //taking input
    printf("enter the length of your array.\n");
    scanf("%d", &l);
    int arr[l];
    printf("Enter %d elements of the array", l);
    for(int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }


    //sorting
    for(int i = 0; i < l; i++)
    {
        for(int j = i + 1; j < l; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    //removing duplicate
    int brr[l], flag = 0, n = 0;
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < l; j++)
        {
            if(arr[i] == brr[j])
            {
                flag = 1;
            }
        }
        if(flag != 1)
        {
            brr[n] = arr[i];
            n++;
        }
        flag = 0;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", brr[i]);
    }

}