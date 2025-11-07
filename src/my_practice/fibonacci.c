//fibonacci number

#include<stdio.h>

int main()
{
    int t, u = 0, v = 1;
    printf("Enter the number of terms you want in a fibonacci number");
    scanf("%d", &t);
    int k = t;
    for(int i = 1; i<=k; i++)
    {
        if(i>2)
        {
            t = u+v;
            u = v;
            v = t;
            printf("%d ", t);
        }
        else if(i==2)
        {
            printf("%d ",v);
        }
        else if(i<2)
        {
            printf("%d ", u);
        }
    }
}