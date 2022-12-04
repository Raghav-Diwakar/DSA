#include<stdio.h>
int main(){
    int i, n, arr[100], num, pos=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("please \n Enter the elements of the array in a sorted way := ");
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be entered : ");
    scanf("%d",&num);
       for(i=0;i<n;i++){
        if(arr[i]<num){
            pos++;
        }else{
            break;
        }
    }
  printf("%d should be entered at position %d",num,pos);
   for(i=n-1;i>=pos;i--) {
        arr[i+1] = arr[i];
    }
	 arr[pos] = num;
      printf("\nThe new array is : ");
    for(i=0;i<=n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}