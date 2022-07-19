#include <stdio.h>
int main()
{
    int n, i, j, position, swap;

    scanf("%d", &n);
    int a[n + 1];
    for (i = 0; i < n + 1; i++)
        scanf("%d", &a[i]);
    for (i = 1; i < n; i++)
    {
        position = i;
        for (j = i + 1; j < n + 1; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }

    for (i = 1; i < n + 1; i++)
        printf("%d ", a[i]);
    return 0;
}