#include <stdio.h>
int main()
{
    int i, n, arr[100];
    int min, j,temp;
    printf("enter the size of array ");
    scanf("%d", &n);
    printf("enter the element of array ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
     for (i = 0; i < (n - 1); i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
            if (min != i)
            {
                temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
    }
    printf("elment after selection sort \n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;}