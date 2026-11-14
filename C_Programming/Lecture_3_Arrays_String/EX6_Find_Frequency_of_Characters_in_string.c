#include <stdio.h>
void main()
{
    char str[100], ch;
    int i=0, frequency = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    
    while (str[i] != 0)
    {
        if (str[i] == ch)
        {
            frequency++;
        }
        i++;
    }

    printf("Frequency of %c is: %d", ch, frequency);
}