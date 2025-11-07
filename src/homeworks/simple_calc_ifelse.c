#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Enter 1 for their addition\n");
    printf("Enter 2 for their subtraction\n");
    printf("Enter 3 for their multiplication\n");
    printf("Enter 4 for their division\n");
    scanf("%d", &a);
    if (a == 1){
        printf("\n%d", b + c);
    }
    else if (a == 2){
        printf("\n%d", b - c);
    }
    else if (a == 3){
        printf("\n%d\n", b * c);
    }
    else if (a == 4){
        printf("\n%d", b / c);
    }
    else{
        printf("\nInvalid input!");
    }
}