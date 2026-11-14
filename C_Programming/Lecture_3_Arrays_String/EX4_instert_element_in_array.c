#include <stdio.h>
void main()
{
    int num_of_element, value_inserted, location;
    int arr[20];
    printf("Enetr num of elements :");
    scanf("%d", &num_of_element);
    for (int i = 0; i < num_of_element; i++)
    {
        arr[i] = i + 1;
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("Enter the element to be inserted :");
    scanf("%d", &value_inserted);
    printf("Enter the location :");
    scanf("%d", &location);
    arr[location - 1] = value_inserted;
    for (int i = 0; i < num_of_element; i++)
    {
        printf("%d\t", arr[i]);
    }
}