#include <stdio.h>
void main()
{

    int num, sum = 0;
    printf("Enter a positive integer:");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {

        sum += i;
    }
    printf("Sum of natural numbers from 0 to %d is %d", num, sum);
}