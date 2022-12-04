#include <stdio.h>

int main()
{
    int i, j, n, k, key;
    printf("enter the length of array \n");
    scanf("%d", &n);
    printf("enter the element of array \n");
    int arr[100];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = n / 2; i > 0; i = i / 2)
    {
        for (j = 0; j < n; j++)
        {
            for (k = j - i; k >= 0; k = k - i)
            {
                if (arr[k + i] >= arr[k])
                    break;
                else
                {
                    int temp = arr[k];
                    arr[k] = arr[k + i];
                    arr[k + i] = temp;
                }
            }
        }
    }
    printf("element after shell sort \n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    return 0;
}