// push program of stack
#include <stdio.h>
#define MAX 7
int stack[MAX];
int top = -1;
int display()
{
    if (top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The current stack elements are given below");
        for (int i = top; i >= 0; i--)
        {
            printf("%d", &stack[i]);
        }
    }
}
void push(int value)
{
    if (top = MAX - 1)
    {
        printf("The stack is overflow");
    }
    else
    {
        top = +1;
        stack[top] = value;
        display();
    }
}
int main()
{
    int value;
    printf("ENter the value to push into the stack");
    scanf("%d", &value);

    if (value == -1)
    {
        printf("Enter 1 to exit the program");
    }
    push(value);
    return 0;
}