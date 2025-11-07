#include <stdio.h>

int main() {
    int n;
    do
    {
        printf("Enter a number which is a multiple of 7.\n");
        scanf("%d", &n);
        if(n%7 == 0)
        {
            break;
        }
    }while(1);
    
    printf("Thankyou!");

    return 0;
}