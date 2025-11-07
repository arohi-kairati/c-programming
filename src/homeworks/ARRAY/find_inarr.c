// To find an element from 1d array

#include<stdio.h>
int main()
{
    int num, pos = -1;
    int arr[]={2, 3, 90, 3, 11};
    printf("Enter a number you want to search in this array.\n");
    scanf("%d", &num);
    for(int i = 0; i<5; i++)
    {
        if(arr[i] == num)
        {
            pos = i;
        }
    }
    if(pos!= -1)
    {
        printf("It is present on index %d\n", pos);
    }
    else
    {
        printf("It is not present in this array.\n");
    }
    return 0;
}