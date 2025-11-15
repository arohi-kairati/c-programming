/*

    *****
   *   *
  *   *
 *   *
*****

*/

#include<stdio.h>

int main()
{
    int m = 3;
    printf("    *****\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf(" ");
        }
        m--;
        printf("*   *\n");
    }
    printf("*****\n");
}