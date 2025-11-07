//NOT CORRECT


#include<stdio.h>
#include<math.h>

int main() {
    int n, ext, reverse = 0, count = 0;
    printf("Enter a number to get its reverse number.");
    scanf("%d", &n);
    int new_n = n;
    int c = n;
    while(n > 0)
    {
        n = n/10;
        count++;
    }
    for(int i = pow(10, (count-1)) ; i>0; i= i/10)
    {
        ext = new_n % 10;
        reverse += ext * i;
        new_n = new_n / 10;
    }
    printf("%d", reverse);
    if(reverse == c)
    {
        printf("It is a palindrome.");
    }
    else
    {
        printf("It is not a palindrome.");
    }
    return 0;
}







/* MORE OPTIMISED
reverse = 0
while n > 0:
    digit = n % 10
    reverse = reverse * 10 + digit
    n = n / 10 */