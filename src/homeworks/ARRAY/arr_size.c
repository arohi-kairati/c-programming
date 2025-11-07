// To find the size of an array

#include<stdio.h>
int main()
{
    int arr[] = {0, 2, 3, 1, 33, 2, 90};
    printf("%lu", sizeof(arr)/sizeof(arr[0]));
    return 0;
}