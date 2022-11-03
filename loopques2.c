#include <stdio.h>

int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++){
        for (j=5;j<=1;j--)
        printf(" ",j%2);
    }
    {
        for (j = 1; j <= i; j++)
            printf("%d", j + k);
        k++;
        printf("\n");
    }
    return 0;
}
//    1
//   2 3
//  3 4 5
// 4 5 6 7