#include<stdio.h>
int main()
{
    int arr[] = {2, 44, 61, 82, 0, 34};
    int k, re_num;
    printf("enter the number you want to replace.\n");
    scanf("%d", &k);
    printf("Enter the value you want to replace it with.\n");
    scanf("%d", &re_num);
    for(int i = 0; i< 6; i++)
    {
        if(arr[i] == k)
        {
            arr[i] = re_num;
            printf("%d ", arr[i]);
        } 
        else
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}