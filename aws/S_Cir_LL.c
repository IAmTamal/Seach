#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

long val[100];
int k = 0;
void extract(char str[])
{
    char *p = str;
    while (*p)
    {
        if (isdigit(*p) || ((*p == '-') && isdigit(*(p + 1))))
        {

            val[k++] = strtol(p, &p, 10);
        }
        else
        {

            p++;
        }
    }
}
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
        printf("BLANK LIST\n");
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
void input()
{
    int n;
    n = val[0];
    struct node *newnode = NULL;
    struct node *ptr;
    int data1, i;
    head = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    if (head == NULL)
    {
        printf("Sorry cant allocate node\n");
    }
    else
    {
        scanf("%d", &head->data);
        ptr->next = head;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Sorry cant allocate node\n");
            }
            else
            {
                scanf("%d", &data1);
                ptr->next = newnode;
                newnode->data = data1;
                newnode->next = head;
                ptr = ptr->next;
            }
        }
    }
}
int main()
{
    char s1[100];
    scanf("%[^\n]%*c", s1);
    extract(s1);

    input();
    display();

    return 0;
}
