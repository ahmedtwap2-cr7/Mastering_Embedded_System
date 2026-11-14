#include <stdio.h>
void main()
{
    char str[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    i--;// Move to the last character
    
    printf("Reversed string: ");
    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}