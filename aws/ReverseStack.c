#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101
char arr[MAX_SIZE];
int top = -1;

int isFull()
{
    if (top == MAX_SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char val)
{
    if (isFull())
    {
        printf("Stack Overflow");
    }
    else
    {
        arr[++top] = val;
    }
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow");
        return -1;
    }
    int val = arr[top];
    printf("%c", arr[top--]);
    return val;
}

void Reverse(char c[], int n)
{
    // loop for push
    for (int i = 0; i < n; i++)
    {
        push(c[i]);
    }
    // loop for pop;
    for (int i = 0; i < n; i++)
    {
        c[i] = top;
        pop();
    }
}

int main()
{
    char c[51];
    // gets(c);
    scanf("%[^\n]%*c", c);

    Reverse(c, strlen(c));
}
