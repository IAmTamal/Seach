// Write a C program for array implementation of Stack i. Push ii. Pop (Dislpay "Stack is Empty" if stack is empty). iii. Display Stack Top (Dislpay "Stack is Empty" if stack is empty). iv. Exit

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}
void push(int item)
{
    if (isFull())
    {
        printf("\nStack Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = item;
}

int pop()
{
    int item;
    if (isEmpty())
    {
        printf("\nStack Underflow\n");
        exit(1);
    }
    item = stack_arr[top];
    top = top - 1;
    return item;
}

int peek()
{
    if (isEmpty())
    {
        printf("\nStack Underflow\n");
        exit(1);
    }
    return stack_arr[top];
}
int k = 0;
void display()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("->%d\n", stack_arr[k++]);
}

int main()
{
    int choice, number;
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &number);
            push(number);
            break;
        case 2:
            number = pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWring choice\n");
        }
    }
    return 0;
}
