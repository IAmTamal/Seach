#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head;
void display()
{
    int i = 1;
    if (head == NULL)
    {
        printf("BLANK LIST\n ");
    }
    else
    {
        printf("After insertion the new list are : \n");
        struct node *ptr;
        ptr = head;
        do
        {
            printf(" Data %d = %d\n", i, ptr->data);
            ptr = ptr->next;
            i++;
        } while (ptr != head);
    }
}
int val[] = {3, 22, 15, 80, 7};

void addmiddle()
{
    int a, pos, i;
    scanf("%d", &a);
    scanf("%d", &pos);
    pos = 3 - 1;
    a = 7;
    struct node *ptr;
    ptr = head;
    struct node *nn;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = a;
    nn->next = NULL;
    for (i = 2; i <= pos; i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        nn->next = ptr->next;
        ptr->next = nn;
    }
}
void input()
{
    int k = 2;
    int n;
    scanf("%d", &n);
    n = val[0];
    struct node *newnode = NULL;
    struct node *ptr;
    int i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Sorry cant allocate node\n");
    }
    else
    {
        scanf("%d", &head->data);
        head->data = val[1];
        head->next = NULL;
        ptr = head;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Sorry cant allocate node\n");
            }
            else
            {
                newnode->data = val[k++];
                newnode->next = NULL;
                ptr->next = newnode;
                ptr = ptr->next;
            }
        }
        ptr->next = head;
    }
}
int main()
{
    input();
    addmiddle();
    display();
    return 0;
}
