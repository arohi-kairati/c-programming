/*

A
AB
ABC
ABCD
ABCDE

*/

#include<stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows\n");
    scanf("%d", &row);
    for(int i = 1; i <= row; i++)
    {
        for(int j = 65; j < i + 65; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}