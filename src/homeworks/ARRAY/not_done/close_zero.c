//To find the pair of integer in an array whose sum is close to zero

#include<stdio.h>

int main()
{
    int arr[] = {2, 3, 4, 5, -2, -1, 9, -7};
    int close_z = arr[0] + arr[1], sum, first, sec;
    for(int i = 0; i < 7; i++)
    {
        for(int j = i+1; j < 9; j++)
        {
            sum = arr[i] + arr[j];
            if(sum < 0)
            {
                sum = -sum;
            }
            if(sum < close_z || sum == 0)
            {
                close_z = sum;
                first = arr[i];
                sec = arr[j];
            }
        }
    }
    printf("Sum closest to zero is : %d\n", close_z);
    printf("The pair with sum closest to zero is : %d and %d\n", first, sec);
    return 0;
}