#include<stdio.h>

int main(){
    int i , j , n ,k;

    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        
        for(j=i;j<=n;j++)
        {
            printf("%c",(j+64));
        }
         printf("\n");
    }
}