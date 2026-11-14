#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);
    int i = 0, length = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        length++;
        i++;
    }
    printf("Length of string :%d", length);
}