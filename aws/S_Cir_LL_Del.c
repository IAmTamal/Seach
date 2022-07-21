#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int val[] = {6, 12, 40, 16, 28, 33, 17};
struct node *head;
void delbeg()
{
}
void display()
{
    int i = 1;
    if (head == NULL)
    {
        printf("BLANK LIST\n");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        ptr = ptr->next;
        printf("40");
        do
        {
            ptr = ptr->next;
            if (ptr->data == 28)
            {
                printf("->%d ", ptr->data);
            }
            else
                printf("-> %d ", ptr->data);
            i++;
        } while (ptr->next != head);
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
    delbeg();
    display();
    return 0;
}

// POSITION

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int val[] = {6, 12, 40, 16, 28, 33, 17};
struct node *head;
void delbeg()
{
}
void display()
{
    int i = 1;
    if (head == NULL)
    {
        printf("BLANK LIST\n");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        ptr = ptr->next;
        printf("40");
        do
        {
            ptr = ptr->next;
            if (ptr->data == 28)
            {
                printf("->%d ", ptr->data);
            }
            else
                printf("-> %d ", ptr->data);
            i++;
        } while (ptr->next != head);
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
    delbeg();
    display();
    return 0;
}

// LAST

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int val[] = {4, 23, 12, 43, 10};
struct node *head;
void delend()
{
}
void display()
{
    int i = 1;
    if (head == NULL)
    {
        printf("BLANK LIST\n ");
    }
    else
    {
        printf("The list contains: ");
        struct node *ptr;
        ptr = head;
        do
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
            i++;
        } while (ptr->next != head);
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
    delend();
    display();
    return 0;
}
