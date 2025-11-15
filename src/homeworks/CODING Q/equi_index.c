//Find an index i where the sum of elements to its left equals the sum of elements to its right.

#include<stdio.h>

int main()
{
    int l;
    //taking input
    printf("Enter the length of the array\n");
    scanf("%d", &l);
    int arr[l];
    printf("Enter the elements of the array\n");
    for(int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }


    //finfing the required index
    int sum1 = 0, sum2 = 0;
    for(int i = 1; i < l; i++)
    {
        for(int j = 0; j < i; j++)
        {
            sum1 += arr[j];
        }

        for(int j = i+1; j < l; j++)
        {
            sum2 += arr[j];
        }

        if(sum1 == sum2)
        {
            printf("The index  where the sum of elements to \nits left equals the sum of elements to its right is: %d\n", i);
            break;
        }
        sum1 = 0;
        sum2 = 0;
    }
}