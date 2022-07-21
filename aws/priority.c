#include <stdio.h>
#define MAX 10
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
int peek()
{
    int j = 0;
    for (int i = 1; i < MAX; i++)
    {
        if (arr[i] > arr[j])
        {
            j = i;
        }
    }
    return j;
}
void deQueue()
{
    int i = peek();
    for (int j = i; j <= rear; j++)
    {
        arr[j] = arr[j + 1];
    }
    rear--;
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
    enQueue(23);
    enQueue(45);
    enQueue(78);
    Print();
    return 0;
}
