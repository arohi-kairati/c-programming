//Write a C program to count the frequency of each element in an array.



#include<stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 2, 2, 3, 1, };
    int check[8] = {};
    int n = 0;
    for(int i = 0; i < 8; i++)  // loop
    {
        int c = 0;
        int present = 0;

        for(int j = 0; j < 8; j++) 
        {
            if(arr[i] == arr[j])   // checking to count the occurence
            {
                c++;          // counting the occurence
            }
            if(arr[i] == check[j])  // checking if the element is already considered
            {
                present = 1; 
            }
        }

        if(present == 0)        //to determine if the element is not already considered
        {
            check[n] = arr[i];                           //adding the element in the check[] array
            printf("frequency of %d is %d\n", arr[i], c);
        }
        n++;
    }
}