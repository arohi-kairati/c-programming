#include<stdio.h>

int main(){
    int year;
    printf("Enter a year in numbers: ");
    scanf("%d", &year);
    // Also, modify it later when you gain more knowledge of c language.
    // Check if the year entered is in numbers or not.
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("It is a leap year! \n");
            }else{
                printf("It is not a leap year! \n");
            }
        }else{
            printf("It is a leap year! \n");
        }
    }else{
        printf("It is not a leap year! \n");
    }
}

/*SIMPLE APPROACH
 if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        printf("It is a leap year!");
}
        
if divisible by 400 OR if divisible by 4 and not by 100*/