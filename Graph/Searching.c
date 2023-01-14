// #include <stdio.h>
// // linear search - series cheching
// // binary search program  - start from mid then check towards left and right with the help of passing low and high
// // Ternary Search
// // Jump Search
// // Interpolation Search
// // index Sequential Search
// // Exponential Search
// void linearSearch(int arr[], int n, int x)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == x)
//             printf("element found at %d position \n", i);
//     }
//     // printf("element not found");
// }
// int BinarySearch(int arr[], int x, int low, int high)
// {
//     int mid;
//     mid = low + (high - low) / 2;
//     if (high >= 1)
//     {
//         if (x = arr[mid])
//             return mid;
//         else if (x > arr[mid])
//         {
//             // low = 3 high 4 mid 3+
//             // low = mid + 1;
//             BinarySearch(arr, x, mid + 1, high);
//         }
//         else if (x < arr[mid])
//         {
//             // high = mid - 1;
//             BinarySearch(arr, x, low, mid - 1);
//         }
//     }
//     else
//         printf("%d Not found", x);
// }
// int main()
// {
//     int arr[7];
//     int n;
//     printf("enter the size of array\n");
//     scanf("%d", &n);
//     printf("enter the element of array\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int x, y;
//     printf("enter the element to search\n");
//     scanf("%d", &x);
//     int low, high;
//     printf("enter the value of low and high \n");
//     scanf("%d", &low);
//     scanf("%d", &high);
//     y = BinarySearch(arr, x, low, high);
//     // linearSearch(arr, n, x);

//     printf("Element found at %d", y);
// }

/********************************************************************/
/****************************BINARY   SEARCH ************************/

// void Binary_Search(int arr[], int x, int low, int high)
// {
//     int mid;
//     mid = low + (high - low) / 2;
//     if (high >= 1)
//     {
//         if (arr[mid] == x) 
//             // return mid;
//             {printf("Elememt Search at %d index",mid+1);}
//         else if (arr[mid] > x)
//             return Binary_Search(arr, x, low, mid - 1);
//         else if (arr[mid < x])
//             return Binary_Search(arr, x, mid + 1, high);
//         else
//             printf("Element not found\n");
//     }
// }
// void Ternary_Search(int arr[],int x   , int low , int high ){
    
// }
// int main()
// {


//     int i, n, arr[100], low, high, x;
//      printf("enter the size of array\n");
//     scanf("%d", &n);
//     printf("enter the element of array\n");

//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     low = 0;
//     high = n - 1;
//     printf("Enter the element to Search\n");
//     scanf("%d",&x);
//     // int y =

//     // Binary_Search(arr,x,low,high);

// }


// Ternary Search
