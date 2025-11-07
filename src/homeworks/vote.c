// To check if the user is eligible for voting or not.

#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 18) {
       printf("You can't vote! "); 
    }else if (age >= 18) {
        printf("You can vote!\n");
    }
}