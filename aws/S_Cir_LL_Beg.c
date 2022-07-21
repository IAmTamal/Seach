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
    if (head == NULL)
    {
        printf("BLANK LIST\n ");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        do
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
}
int val[] = {3, 67, 15, 8, 10};
void addbeg()
{
    struct node *addnode;
    addnode = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &addnode->data);
    addnode->data = val[4];

    struct node *ptr;
    ptr = head->next;

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = addnode;
    addnode->next = head;
    head = addnode;
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
    addbeg();
    display();
    return 0;
}
