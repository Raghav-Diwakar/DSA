#include <stdio.h>
//  void print(int a[], int n) //function to print array elements
//     {
//     int i;
//     for(i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     }
//  void bubble(int a[], int n) // function to implement bubble sort
//  {
//    int i, j, temp;
//    for(i = 0; i < n; i++)
//     {
//       for(j = i+1; j < n; j++)
//         {
//             if(a[j] < a[i])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//  }
void main()
{
    int i, j, temp;
    int n, arr[100];
    printf("enter the size of array ");
    scanf("%d", &n);
    printf("enter the element of array ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Before sorting array elements are - \n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   printf("\nbubble sorted array is\n");
    for (i = 0 ; i< n ; i++)
   printf("%d\t",arr[i]);
}