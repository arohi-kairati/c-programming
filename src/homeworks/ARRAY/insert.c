//Write a C program to insert an element at a specific position in an array.

#include <stdio.h>

int main() {
    int arr[8] = {1,2,3,4,5,6,7};
    int in, place, c, k;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number you want to insert>\n");
    scanf("%d", &in);
    printf("Enter the position to insert it in.\n")''
    scanf("%d", &place);
    for(int i = 0; i < size; i++)
    {
        if(i == place - 1)
        {
            c = arr[i];
            for(int j = i+1; j < size; j++)
            {
                k = arr[j];
                arr[j] = c;
                c = k;
            }
            arr[i] = in;
            break;
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}