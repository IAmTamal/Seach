#include <stdio.h>
int main()
{
    int array[100], n, i, j, swap;
    scanf("%d", &n);
    int ctr = 0;

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
                ctr++;
            }
        }
    }

    printf("%d", ctr);

    return 0;
}