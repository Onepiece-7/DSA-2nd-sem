// fibonacci series using recursion function
#include <stdio.h>
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("The fibonacci series of the given number %d is:\n", n);
    for (int i = 0; i < n; i++)
    {
        fib(i);
        printf("%d ", fib(i));
    }
}