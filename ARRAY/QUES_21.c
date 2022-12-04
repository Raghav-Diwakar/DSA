#include <stdio.h>

int main()
{
    int i, j, a[10][10] , temp ;
    printf("enter the element of matrix of order 3 \n ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    
    for (i = 0; i <= 3; i++)
        for (j = 0; j < i; j++){
     temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    printf("transpose of given element is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
            printf("\n");
    }
    return 0;
}