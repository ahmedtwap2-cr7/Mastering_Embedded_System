#include <stdio.h>
void main()
{
    float a, b, c;
    printf("Enter three numbers :");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("Largest number is %f", a);
    }
    else if (b > c)
    {
        printf("Largest number is %f", b);
    }
    else
    {
        printf("Largest number is %f", c);
    }
}