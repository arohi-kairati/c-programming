//Write a C program to demonstrate the difference between %d, %f, and %c

#include<stdio.h>

int main()
{
    int num;
    char ch;
    float k;
    printf("Enter a same positive number as an integer, character and float.");
    scanf("%d %c %f",&num, &ch, &k);
    printf("%d\n", num);
    printf("%c\n", ch);
    printf("%f\n", k);
}