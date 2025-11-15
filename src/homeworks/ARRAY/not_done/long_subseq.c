//WAP to find out the longest subsequence of consecutive numbers in an integer array.
//i/p = {0, 2, 4, 2, 1, 0}
// o/p = {0, 1, 2, 4}

#include<stdio.h>

int main()
{
    int l, temp;

    //taking input
    printf("enter the length of your array.\n");
    scanf("%d", &l);
    int arr[l];
    printf("Enter %d elements of the array\n", l);
    for(int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = 0;
    int new[l];
    for(int j = 0; j < l; j++)
    {
        if(j == l - 1)
        {
            break;
        }
        if(arr[j + 1] - 1 == arr[j] || arr[j] - 1 == arr[j - 1])
        {
            if(j == 0)
            {
                new[s] = arr[j];
                s++;
            }
            new[s] = arr[j + 1];
            s++;
        }
    }

    int l2 = sizeof(new) / sizeof(new[0]);
    int count = 1, k;
    int maxcount = 0;
    while(1)
    {
        for(int i = 0; i < l2; i++)
        {
            if(new[i] + 1 == new[i+1])
            {
                count++;
                k = i;
            }
        }
        if(maxcount < count)
        {
            maxcount = count;
        }
        count = 1;
        if(k == l2 - 1)
        {
            break;
        }
    }
    
    return 0;
}