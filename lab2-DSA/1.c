// implementation of stack using array: push() pop() operation
// WAP to insert integer data into the array using the concept of stack with push operation
#include <stdio.h>
#include <stdlib.h>
void push(int *stack, int *top, int size, int value);
void pop(int *stack, int *top);
void display(int *stack, int top);
void push(int *stack, int *top, int size, int value)
{
    if (*top == *stack - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        (*top) = +1;
        stack[*top] = value;
    }
}
void pop(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("The stack is overflow\n");
    }
    else
    {
        printf("Popped %d form the stack :\n", stack[*top]);
        (*top) = -1;
    }
}
void display(int *stack, int top)
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("Stack elements");
        for (int i = top; i >= 0; i--)
        {
            printf("Element %d\n", stack[i]);
        }
    }
}
int main()
{
    int size = 5;
    int *stack = (int *)malloc(size * sizeof(int));
    int top = -1;
    int choice, value;

    while (1)
    {

        printf("C code to demonstrate the push pop and display it\n ");
        printf("1. push\n 2. pop\n 3. display\n 4. exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("ENter the value to push \n");
            scanf("%d", &value);
            push(stack, &top, size, value);
            break;
        case 2:
            pop(stack, &top);
            break;
        case 3:
            display(stack, top);
            break;
        case 4:
            free(stack);
            exit(0);
        default:
            printf("The choice is invalid\n");
        }
    }
    return 0;
}

