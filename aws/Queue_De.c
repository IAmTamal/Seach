#include <stdio.h>
#define MAX 100
int arr[MAX];
int front = -1, rear = -1;

int isEmpty()
{
    return (front == -1 && rear == -1) ? -1 : 0;
}

int isFull()
{
    return rear == MAX - 1 ? -1 : 0;
}

void enQueue(int x)
{
    if (isFull())
    {
        printf("queue is full\n");
        return;
    }
    else
    {
        rear++;
        arr[rear] = x;
    }
}
void deQueue()
{
    if (isEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        front++;
    }
}
void deQueue_rear()
{
    if (isEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        rear--;
    }
}
void Print()
{
    int length = (rear - front);
    int i;
    for (i = 0; i < length; i++)
    {
        printf("->%d\n", arr[i]);
    }
}

int main()
{
    enQueue(67);
    enQueue(12);
    enQueue(15);
    Print();
    return 0;
}
