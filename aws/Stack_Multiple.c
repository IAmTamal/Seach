#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int topA = -1;
int topB = MAX_SIZE;
// for Push for Stack A
void PushA(int x)
{
    if (topA == topB - 1)
    {
        printf("Error: stack overflow\n");
    }
    else
    {
        A[++topA] = x;
    }
}
// Push for Stack B
void PushB(int x)
{
    if (topA == topB - 1)
    {
        printf("Error: stack overflow\n");
    }
    else
    {
        A[--topB] = x;
    }
}

// Pop for stack A
void PopA()
{
    if (topA == -1)
    {
        printf("Error!! stack underflow: NO element to pop\n");
    }
    else
    {
        topA--;
    }
}

// Pop for stack B
void PopB()
{
    if (topB == MAX_SIZE)
    {
        printf("Error!! stack underflow: NO element to pop\n");
    }
    else
    {
        topB++;
    }
}

// Print for Stack A
void PrintA()
{
    for (int i = 0; i <= topA; i++)
    {
        printf("%d", A[i]);
        if (A[i] == 23)
        {
            printf(", ");
        }
    }
    printf("\n");
}
// Print for Stack B
void PrintB()
{
    for (int i = topB; i < MAX_SIZE; i++)
    {
        printf("%d ", A[i]);
        if (A[i] == 23)
        {
            // printf(", ");
        }
    }
    printf("\n");
}
int main()
{
    PushA(23);
    PushA(45);
    PushA(34);
    PushA(65);
    PopA();
    PopA();
    PrintA();
}
