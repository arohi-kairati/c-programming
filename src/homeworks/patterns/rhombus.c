/*

    *****
   *****
  *****
 *****
****

*/

#include<stdio.h>

int main()
{
    int k = 4;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf(" ");
        }
        k--;

        printf("*****\n");
    }
}