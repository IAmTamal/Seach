// Write a C Program to implement Stack using Linked List with Following Menu. i. Push ii. Pop (Dislpay "Stack is Empty" if stack is empty). iii. Display Stack Top (Dislpay "Stack is Empty" if stack is empty). iv. Exit

#include <stdio.h>
#include <stdlib.h>

int n, *stack;

void push();
void pop();
void display();
struct node
{
    int val;
    struct node *next;
};
struct node *head;

void push(int val)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        ptr->val = val;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->val = val;
        ptr->next = head;
        head = ptr;
    }
}

void pop()
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {

        while (ptr != NULL)
        {
            printf("->%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}
int main()
{

    n = 10;
    stack = (int *)malloc(n * sizeof(int));

    push(10);
    push(20);
    push(30);

    display();
    pop();
    pop();
    pop();
    display();

    return 0;
}
