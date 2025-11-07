#include<stdio.h>

int main()
{
    int arr[3][4] = {{1, 2, 3, 0}, {4, 5, 6, 0}, {7, 8, 9, 0}};
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        printf("sum of %d row of the matrix is: %d\n", i+1, sum);
        sum = 0;
    }
    return 0;
}