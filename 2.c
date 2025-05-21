// WAP a program to display mXn order matrix using 2D array

#include <stdio.h>
int main()
{
    int i, j, a[10][10];
    int m = 3, n = 3;
    printf("Enter %d elements for the matrix:\n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements presents in the matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}