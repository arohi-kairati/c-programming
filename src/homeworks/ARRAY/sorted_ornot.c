//To check if a given array elements are sorted in ascending order or not.

#include<stdio.h>

int main()
{
    int arr[] = {0,2,3,4,5,6,10,8,9,20}, c = 0;
    for(int i =0; i< 10; i++)
    {
        if(arr[i] < arr[i+1])
        {
            c++;
        }
    }
    if(c==9)
    {
        printf("Sorted in acsending order");
    }
    else
    {
        printf("Not sorted in acsending order");
    }
    return 0;
}