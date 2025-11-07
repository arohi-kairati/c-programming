//To validate a phone number if it is an Indian phone number.

#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
    int phnum, count = 0;
    char code;
    printf("Enter a phone number");
    scanf("%d", &phnum);
    printf("Enter the country code of the phone number you entered");
    scanf("%c", &code);
    
    while(phnum > 0)
    {
        phnum = phnum/10;
        count++;
    }
    if(code == '+91' && count == 10 && (phnum / pow(10, 9) >=6 || phnum / pow(10, 9) <=9 ))
    {
        printf("It is a valid phone number.");
    }
    else
    {
        printf("It is not a valid number.");
    }
}