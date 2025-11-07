//To check if the roots of a quadratic equation are real or imaginary.

#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a, b, c for a quadratic equation ax^2 + bx + c = 0. 
        To check if its roots are real or imaginary.");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    d = (b * b) - (4 * a * c);

    if(d >= 0)
    {
        printf("The roots of %dx^2 + %dx + %d are real.", a, b, c);
    }
    else
    {
        printf("The roots of %dx^2 + %dx + %d are imaginary.", a, b, c);
    }
}