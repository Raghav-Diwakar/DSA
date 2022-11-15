// 7 , 6 ,3 , 1, 1, 2, 1, 7 , 6, 3, 5,
//1 , 4, 9
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int pqdeletion(int a[], int n)
{
    int x = a[0];
    arraydel(a[n], n, x);
    return x;
}
void pqinsertion(int a[], int n, int x)
{
    int i = 0;
    while (i < n && n >= a[i])
    {
        i = i + 1;
    }
    arrayins(a[n], n, i, x);
}
void arraydel(int a[], int i, int n)
{
    int j = j + 1;
    a[j - 1] = a[j];
    n = n - 1;
}
// void arrinsertion(int x , int a[] , )


int main()
{
    int n, i, x , j ;
    int a[10];
    printf("enter the array of size 10\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( j =1 ; j < n ; j++){
        x =a[j];
        pqinsertion(a, x, n );
        arrinsertion( a , n , i , x);
    }
    for (  j =1 ;  j < n ; j++){
        printf("%d",a[j]);
    }
    return 0;
}