#include<stdio.h>
#include"mylib.h"
#include"arraylib.h"

int main()
{
    char action;
    printf("Enter A to work on an integer\n or Enter B to work on an array.\n");
    scanf("%c", &action);
    if(action == 'A')
    {
        int n, choice;
        printf("Enter an integer.\n");
        scanf("%d", &n);
        printf("Enter: \n 1 to Check for Armstrong number\n 2 to check for Adams number\n 3 to check for Prime palindrome number\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            if(isArmstrong(n))
            {
                printf("It is an Armstrong number.\n");
            }
            else
            {
                printf("It is not an Armstrong number.\n");
            }
            break;

            case 2:
            if(isAdams(n))
            {
                printf("It is an Adams number.\n");
            }
            else
            {
                printf("It is not an Adams number.\n");
            }
            break;

            case 3:
            if(isPrimePalindrome(n))
            {
                printf("It is a Prime palindrome number.\n");
            }
            else
            {
                printf("It is not a Prime palindrome number.\n");
            }
            break;

            default:
            printf("Wrong choice. Exiting program. Goodbye!\n");
        }
    }
    else if(action == 'B')
    {
        int arr[5] = {1, 45, 34, 6, 9}, size;
        size = 5;
        int c;
        printf("Enter:\n 1 to find index of largest number.\n 2 to find index of largest number.\n 3 to find average of all elements.\n 4 to display the array.\n 5 to reverse the array.\n 6 to sort the array.\n 7 to search for an element in an array.\n");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
            printf("The index of the largest element is; %d\n", findMaxIndex(arr, size));
            break;

            case 2:
            printf("The index of the smallest element is; %d\n", findMinIndex(arr, size));
            break;

            case 3:
            printf("Average of all elements is: %g\n", findAverage(arr, size));
            break;

            case 4:
            displayArray(arr, size);
            break;

            case 5:
            reverseArray(arr, size);
            break;

            case 6:
            sortArray(arr, size);
            break;

            case 7:
            {
                int value;
                printf("Enter the value you want to search in the array.\n");
                scanf("%d", &value);
                if(linearSearch(arr, size, value) == -1)
                {
                    printf("Not present in the array.\n");
                }
                else
                {
                    printf("It is present on index: %d\n", linearSearch(arr, size, value));
                }
                break;
            }

            default:
            printf("Wrong choice!\n");
        }
    }
}