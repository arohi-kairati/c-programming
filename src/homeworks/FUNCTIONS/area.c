//To find the area of a square or a rectangle or a circle.

#include <stdio.h>

float areaSquare(float side);
float areaRectangle(float a, float b);
float areaCircle(float r);

int main() 
{
    char shape;
    float side, a, b, r;
    printf("what do you want to calculate?\n");
    printf("Enter s if you want the area of Square, r for area of rectangle, c for area of circle.\n");
    scanf("%c", &shape);
    if(shape == 's')
    {
        printf("enter side of the square.\n");
        scanf("%f", &side);
        printf("Area of square is : %g\n", areaSquare(side));
    }
    else if(shape == 'r')
    {
        printf("enter sides of the rectangle.\n");
        scanf("%f%f", &a, &b);
        printf("Area of rectangle is : %g\n", areaRectangle(a, b));
    }
    else if(shape == 'c')
    {
        printf("enter radius of the circle.\n");
        scanf("%f", &r);
        printf("Area of circle is : %g\n", areaCircle(r));
    }
    
    return 0;
}

float areaSquare(float side)
{
    return side*side;
}

float areaRectangle(float a, float b)
{
    return a*b;
}

float areaCircle(float r)
{
    return 3.14*r*r;
}