#include <stdio.h>
void main()
{

    float num1, num2, result;
    char ch;
    printf("Enter operator either + or - or * or divide :");
    scanf("%c", &ch);
    printf("Enter two numbers :");
    scanf("%f %f", &num1, &num2);
    switch (ch)
    {

    case '+':
        result = num1 + num2;
        printf("%f + %f = %f", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%f - %f = %f", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%f * %f = %f", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%f / %f = %f", num1, num2, result);
        break;
    default:
        printf("Error! operator is not correct");
    }
}