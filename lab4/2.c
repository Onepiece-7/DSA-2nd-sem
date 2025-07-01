// implemetation of dequeue using array by deleting data from the rear
#include<stdio.h>
void dequeue_from_rear()
{
    int queue[5], front = -1, rear = -1, n = 5, item, i;
    printf("Enter the elements in the queue\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &item);
        if((front == 0 && rear == n - 1) || (rear == (front - 1) % (n - 1))) 
        {
            printf("Queue is full\n");
            return;
        } 
        else if(front == -1) 
        {
            front = rear = 0;
            queue[rear] = item;
        } 
        else if(rear == n - 1 && front != 0) 
        {
            rear = 0;
            queue[rear] = item;
        } 
        else 
        {
            rear++;
            queue[rear] = item;
        }
    }
    
    printf("Elements in the circular queue are:\n");
    for(i = front; i != rear; i = (i + 1) % n) 
    {
        printf("%d ", queue[i]);
    }
    printf("%d\n", queue[rear]);
}
int main()
{
    dequeue_from_rear();
    return 0;
}