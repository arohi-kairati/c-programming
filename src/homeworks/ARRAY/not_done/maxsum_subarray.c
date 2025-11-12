//To find the subarray with maximum sum.

#include<stdio.h>
int main()
{
    int arr[5];
    int sum = 0;
    int start, end;
    printf("Enter 5 elements in an array.");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);        // {2, -3, 4, 9, 1, 3}
    }
    int max = arr[0] + arr[1];
    int size = 5;
    int n = 1;

    for(int i = 0; i < 5; i++)
    {
        for(int j = i; j < 5; j++)
        {
            n++;        
            for(int k = j; k < n + j; k++)
            {
                sum = sum + arr[i];
                if(k == 4)
                {
                    break;
                }
            }
            if(sum > max)
            {
                max = sum;
                start = i;
                end = n + 1;
            }
            sum = 0;
        }
    }

    printf("The subarray with the maximum sum: \n");
    for(int i = start; i < end; i++)
    {
        printf("%d ", arr[i]);
    }
}