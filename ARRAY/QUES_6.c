#include <stdio.h>    
     
int main()    
{    
   int n , i ;
    int arr[100];
    printf("enter the length of array \n");
    scanf("%d",&n);
    printf("enter the element of array =");
    for (i=0 ; i< n ; i++)
    scanf("%d",&arr[i]);     
        
    printf("Duplicate elements in given array: \n");    
       
    for(int i = 0; i < n ; i++) {    
        for(int j = i + 1; j < n ; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
            
        }    
    }    
    
    return 0;    
}  