// Addition of two polinomial
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    struct node *link;
};
struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *insert(struct node *head, int co)
{
    struct node *temp;
    struct node *newN = malloc(sizeof(struct node));
    newN->coeff = co;
    newN->link = NULL;
    if (head == NULL)
    {
        newN->link = head;
        head = newN;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        // newN->link=temp->link;
        temp->link = newN;
    }
    return head;
}
struct node *creat(struct node *head)
{

    if (head == head1)
    {
        head1 = insert(head1, 5);
        head1 = insert(head1, 0);
        head1 = insert(head1, 10);
        head1 = insert(head1, 6);
        return head1;
    }
    else
    {
        head2 = insert(head2, 1);
        head2 = insert(head2, 2);
        head2 = insert(head2, 4);
        return head2;
    }
}
void print(struct node *head)
{
    if (head == NULL)
    {
        printf("NO POLYNOMIAL.");
    }
    else
    {
        struct node *temp = head;
        printf("sum : ");
        while (temp != NULL)
        {
            printf("%d, ", temp->coeff);
            temp = temp->link;
            if (temp->coeff == 6)
            {
                printf("%d", temp->coeff);
                return;
            }
        }
    }
}

void pollyAdd(struct node *head1, struct node *head2)
{
    struct node *temp1 = head1;
    struct node *temp2 = head2;
    struct node *head3 = NULL;

    while (temp1 != NULL && temp2 != NULL)
    {
        head3 = insert(head3, temp1->coeff + temp2->coeff);
        temp1 = temp1->link;
        temp2 = temp2->link;
    }
    while (temp1 != NULL)
    {
        head3 = insert(head3, temp1->coeff);
        temp1 = temp1->link;
    }
    while (temp2 != NULL)
    {
        head3 = insert(head3, temp2->coeff);
        temp2 = temp2->link;
    }
    print(head3);
}

int main()
{

    head1 = creat(head1);
    head2 = creat(head2);

    pollyAdd(head1, head2);
    return 0;
}
