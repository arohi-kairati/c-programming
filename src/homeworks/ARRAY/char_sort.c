// To sort the character array in ascending order.


#include<stdio.h>

int main()
{
    char arr[5] = {'e', 'd', 'c', 'b', 'a'};
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                char b;
                b = arr[i];
                arr[i] = arr[j];
                arr[j] = b;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%c", arr[i]);
    }
}