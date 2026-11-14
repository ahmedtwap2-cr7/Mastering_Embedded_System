#include <stdio.h>
void main()
{

    int arr[20], no_of_elements, element_to_be_searched, flag;
    printf("Enetr num of elements :");
    scanf("%d", &no_of_elements);

    for (int i = 0; i < no_of_elements; i++)
    {
        arr[i] = (i + 1) * 11;
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("Enter the element to be searched :");
    scanf("%d", &element_to_be_searched);
    
    for (int n = 0; n < no_of_elements; n++)
    {
        if (arr[n] == element_to_be_searched)
        {
            printf("Number found at the location:%d", n + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Number not exist in the array");
    }
}