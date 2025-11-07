//To check if a program to check if the matrix is skew symmetric

#include<stdio.h>

int main()
{
    int arr[3][3] = {{0, 2, -3},
                   {-2, 0, 4},
                   {3, -4, 0}};
    int brr[3][3];
    int c = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == -brr[i][j])
            {
                c++;
            }
        }
    }
    if(c == 3*3)
    {
        printf("It is Skew Symmetric!\n");
    }
    else
    {
        printf("It is not Skew Symmetric!\n");
    }
}