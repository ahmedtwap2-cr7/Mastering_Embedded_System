#include <stdio.h>
void main()
{

    int arr[5][5];
    int trans[5][5];
    int row, colum;
    printf("Enter rows and column of matrix:");
    scanf("%d", &row);
    scanf("%d", &colum);
    printf("Enetr elements of matrix :\n");
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < colum; y++)
        {
            printf("Enter elements a%d%d : ", x, y);
            scanf("%d", &arr[x][y]);
        }
    }
    printf("Entered Matrix:\n");
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < colum; y++)
        {
            printf("%d\t", arr[x][y]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix:\n");
    for (int x = 0; x < colum; x++)
    {
        for (int y = 0; y < row; y++)
        {
            trans[x][y]=arr[y][x];
            printf("%d\t", trans[x][y]);
        }
        printf("\n");
    }
}