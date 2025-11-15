//to find the second largest element in a 2d array using pointers

#include<stdio.h>
int main()
{
    int arr[3][2] = {{1, 5}, {3, 7}, {8, 6}};
    int (*p)[3] = arr;            // int *p = arr;
    int larg = arr[0][0];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(larg < (p[i][j]))         // larg < *(p + i + j)
            {
                larg = p[i][j];
            }
        }
    }

    int num = arr[0][0];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(num < p[i][j] && p[i][j] < larg)
            {
                num = p[i][j];
            }
        }
    }

    printf("%d", num);
}