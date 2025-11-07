//To handle when enter key is taken as character.

#include<stdio.h>
int main()
{
    int num;
    float num_two;
    char val_one;
    scanf("%d", &num);
    scanf("%f", &num_two);
    scanf(" %c", &val_one);
    printf("%d \n", num);
    printf("%f \n", num_two);
    printf("%c \n", val_one);
}