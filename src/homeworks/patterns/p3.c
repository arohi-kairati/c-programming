/*    *
    ***
  *****    */



#include <stdio.h>


int main() 
{
    for(int i = 1; i<= 3; i++)
    {
        for(int k = 1; k<=3-i; k++)
        {
            printf(" ");
        }
        for(int j =1; j<=i; j=j+1)
        {
            printf("*");
        }
        printf("\n");
    }
}