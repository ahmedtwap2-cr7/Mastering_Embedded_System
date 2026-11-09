#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    switch (ch)
    {

    case 'A' ... 'Z':
    case 'a' ... 'z':
        printf("%c is an alphabet", ch);
        break;
    default:
        printf("%c is not an alphabet", ch);
    }
}