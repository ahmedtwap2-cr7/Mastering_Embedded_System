#include <stdio.h>
void main()
{

    float mat1[2][2];
    float mat2[2][2];
    float sum[2][2];
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("Enter a%d%d:", i + 1, n + 1);
            scanf("%f", &mat1[i][n]);
        }
    }

    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("Enter a%d%d:", i + 1, n + 1);
            scanf("%f", &mat2[i][n]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            sum[i][n] = mat1[i][n] + mat2[i][n];
            printf("%f\t", sum[i][n]);
        }
        printf("\n");
    }
}