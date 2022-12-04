#include <stdio.h>
 
// Utility function to find a minimum of two numbers
int min(int x, int y) {
    return (x < y) ? x : y;
}
 

int binarySearch(int A[], int low, int high, int x)
{

    if (low > high) {
        return -1;
    }
    int mid = (low + high)/2; 
    if (x == A[mid]) {
        return mid;
    }

    else if (x < A[mid]) {
        return binarySearch(A, low, mid - 1, x);
    }

    else {
        return binarySearch(A, mid + 1, high, x);
    }
}
 

int exponentialSearch(int A[], int n, int x)
{
    
    if (n == 0) {
        return -1;
    }
 
    int bound = 1;
 

    while (bound < n && A[bound] < x) {
        bound *= 2;   
    }
     return binarySearch(A, bound/2, min(bound, n - 1), x);
}
 
int main(void)
{
    int A[] = {2, 5, 6, 8, 9, 10};
    int target = 9;
 
    int n = sizeof(A)/sizeof(A[0]);
    int index = exponentialSearch(A, n, target);
 
    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}