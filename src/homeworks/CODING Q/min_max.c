//Find an element that is minimum in its row but maximum in its column.


#include<stdio.h>
int main()
{
    //taking input
    int l, c;
    printf("Enter the number of rows and column of the array\n");
    scanf("%d", &l);
    scanf("%d", &c);
    int arr[l][c];
    printf("Enter the elements of the array\n");
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //printing arr
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }



    //searching for minimum element in each row
    int crr[l], k = 0;
    int min = arr[0][0];
    for(int i = 0; i < l; i++)
    {
        min = arr[i][0];
        for(int j = 0; j < c; j++)
        {
            if(min > arr[i][j])
            {
                min = arr[i][j];
                n = j;
            }
        }
        crr[k] = min;
        
    }

    //printing crr
    // for(int i = 0; i < k; i++)
    // {
    //     printf("%d\t", crr[i]);
    // }


    // searching for max element on crr
    int max = crr[0];
    for(int i = 0; i < k; i++)
    {
        if(max < crr[i])
        {
            max = crr[i];
        }
    }

    printf("The element which is the smallest in its row but largest in its column: %d", max);
}