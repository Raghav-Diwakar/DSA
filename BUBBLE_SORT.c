// in bubble sort compare first two element and if second one in lower than swap and take next two element ( 2nd and third ) do the same thing
// so that largest element is now at last position and freeze and makes complete series in ascending order

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printarray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {1, 3, 2, 5, 4, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    printf(" sorted array = \n");
    printarray(arr, n);
    return 0;
}