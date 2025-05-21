#include <stdio.h>
void factorial(int n, int *result)
{
    if (n == 0 || n == 1)
    {
        *result = 1;
        return;
    }
    factorial(n - 1, result);
    *result *= n;
}
int main()
{
    int n, result = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n, &result);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}