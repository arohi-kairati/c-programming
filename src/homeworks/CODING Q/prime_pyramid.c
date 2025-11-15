/* Write a program to print a pyramid of prime numbers, where the number of rows n is given by
the user.
Each row i should contain exactly i prime numbers in ascending order.
Example (for n = 5):
2
3 5
7 11 13
17 19 23 29
31 37 41 43 47 */

#include<stdio.h>
int main()
{
    int row, c = 0, k = 1, p = 0, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for(int i = 1; i <= row; i++)
    {
        // for(int j = 1; j <= i; j++)
        // {
            while(p != i)
            {
                if(num % k == 0 && num >= k)
                {
                    c++;
                }
                k++;
                

                if(c == 2)
                {
                    printf("%d\t", num);
                    p++;
                    c = 0;
                    num++;
                    k = 1;
                }
                else if(c > 2 || num == 1)
                {
                    num++;
                    k = 1;
                    c = 0;
                }
            }
            printf("\n");
            p = 0;
        //}
    }
    return 0;
}