#include <stdio.h>

int main()
{
    int i, k , j;
    for (i = 1; i <= 4; i++)
    {   j = i ;
        for (k = 1 ; k <= i ; k++)
        {
            printf("%d", j++);
        }
        printf("\n");
    }
    return 0;
}