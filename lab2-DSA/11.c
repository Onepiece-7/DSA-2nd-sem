// Beexoul

#include <stdio.h>
#include <stdlib.h>
void push(int *stack, int *top, int size, int value);
void pop(int *stack, int *top);
void display(int *stack, int *top);
void push(int *stack, int *top, int size, int value)
{
    if (*top == size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        (*top)++;
        stack[*top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
}
void pop(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Poped %d from the stack\n", stack[*top]);
        (*top)--;
    }
}
void display(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is elements:");
        int i;
        for (i = *top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
        printf("\n");
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
        printf("C code to Demonstrate the Push Pop and Display it \n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push:");
            scanf("%d", &value);
            push(stack, &top, size, value);
            break;
        case 2:
            pop(stack, &top);
            break;
        case 3:
            display(stack, &top);
            break;
        case 4:
            free(stack);
            exit(0);
        deafult:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
