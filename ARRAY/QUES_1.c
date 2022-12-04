#include <stdio.h>
void printarr(int* arr, int n)
{
	int i;

	printf("given array is =  ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 2, -1, 5, 6, 0, -3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printarr(arr, n);

	return 0;
}
