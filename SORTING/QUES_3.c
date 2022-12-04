#include <stdio.h>

int main()
{
    int i, n, j;
    int arr[100];
    printf("enter the size of array = \n");
    scanf("%d", &n);
    printf("enter the element of array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        int key;

        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("element after insertion sort is = \n");
    for (i = 0; i < n; i++)
        printf("%d", arr[i]);

    return 0;
}