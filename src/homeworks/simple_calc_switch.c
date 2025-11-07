#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d", &b);
    scanf("%d", &c);
    TryAgain:
    printf("Enter 1 for their addition\n");
    printf("Enter 2 for their subtraction\n");
    printf("Enter 3 for their multiplication\n");
    printf("Enter 4 for their division\n");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("%d \n", b+c);
        break;
        case 2:
        printf("%d \n", b-c);
        break;
        case 3:
        printf("%d \n", b*c);
        break;
        case 4:
        printf("%d \n", b/c);
        break;
        default:
        printf("Invalid input. Try Again!\n");
        goto TryAgain;
    }
}