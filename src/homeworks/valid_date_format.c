// To check if date entered in dd mm yyyy format is valid.

// make it more optimised.
#include <stdio.h>

int main() {
    // Write C code here
    int day, month, year;
    printf("Enter a date in dd mm yyyy fotmat\n");
    scanf("%d %d %d", &day, &month, &year);
    if (month == 1 || month == 3|| month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day >= 1 && day <= 31)
        {
            if(year>= 1000 && year<= 9999)
            {
                printf("You entered a valid date");
            }else{
                printf("You entered an invalid date");
            }
        }else{
            printf("You entered an invalid date");
        }
    }
    else if( month == 4|| month == 6 || month == 9 || month == 11)
    {
        if (day >= 1 && day <= 30)
        {
            if(year>= 1000 && year<= 9999)
            {
                printf("You entered a valid date");
            }
            else{
                printf("You entered an invalid date");
            }
        }
        else{
            printf("You entered an invalid date");
        }
    }
    else if( month == 2)
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                if (day >= 1 && day <= 29)
                {
                    printf("You entered a valid date");
                }
                else{
                    printf("You entered an invalid date");
                }
            }
            else{
               if (day >= 1 && day <= 28)
                {
                    printf("You entered a valid date");
                }
                else{
                    printf("You entered an invalid date");
                }
            }
        }
    else{
            printf("You entered an invalid date");
        }  

    return 0;
}