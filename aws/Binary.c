#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// binarysearch function
void binary(int arr[], int arraysize, int input)
{
    int start = 0, end = arraysize - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (input < arr[mid])
        {
            end = mid - 1;
        }
        else if (input > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            printf("%d \n", mid + 1);
            return;
        }
    }
}

int main()
{
    int arraysize, inputsize, input;
    scanf("%d", &arraysize);
    int arr[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &inputsize);

    for (int i = 0; i < inputsize; i++)
    {
        scanf("%d", &input);
        binary(arr, arraysize, input);
    }
    return 0;
}
