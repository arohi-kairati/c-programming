#include<stdio.h>

int main() {
    int x, y;
    printf("Enter the values of x and y.");
    scanf("%d", &x);
    scanf("%d", &y);
    if(x > 0 && y > 0)
    {
        printf("First Quadrant\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Second Quadrant\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("Third Quadrant\n");
    }
    else
    {
        printf("Fourth quadrant\n");
    }
    return 0;
}