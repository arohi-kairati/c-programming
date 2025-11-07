/* 
   A
  aB
 AbC
*/



#include<stdio.h>
int main()
{
    for(int i = 1; i<=3 ; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            char ch = 'A' + j-1;
            if((i+j)%2 == 0)
            {
                printf("%c", ch);
            }
            else
            {
                printf("%c", ch + 32);
            }
        }
        printf("\n");
    }
}