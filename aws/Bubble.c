#include <stdio.h>
#include <stdbool.h>
int bubble_sort(int arr[], int n)
{

    bool swapped;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
                count = count + 1;
            }
        }

        if (swapped == false)
            break;
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", bubble_sort(arr, n));
}
