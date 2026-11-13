#include<stdio.h>
void main()
{
    float arr[100], sum = 0, avg;
    int n;
    printf("Enter the number of data:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("%d. Enter number:",i+1);
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("The average is: %f", avg);


}