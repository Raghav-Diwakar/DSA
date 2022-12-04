#include <stdio.h>

int main()
{
    int n1, n2, n3, i;
    int a[100], b[100], c[100];
    printf("enter the size of first array = ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("enter the size of second array = ");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    n3 = n1 + n2;
    for (i = 0; i < n1; i++)
        c[i] = a[i];
    for (i = 0; i < n2; i++)
        c[n1 + i] = b[i];
    printf("simple merged array is\n ");

    for (i = 0; i < n3; i++)
        printf("%d\t", c[i]);

    printf("\n sorted array is \n");

    for (int i = 0; i < n3; i++)
    {
        int temp;
        for (int j = i + 1; j < n3; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for (i = 0; i < n3; i++)
        printf("%d\t", c[i]);
    return 0;
}