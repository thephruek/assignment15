#include <stdio.h>  
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            printf("%d\t", (i * j));
        }
        printf("\n");
    }
}