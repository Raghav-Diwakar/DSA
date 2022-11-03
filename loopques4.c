#include<stdio.h>

int main(){
    int i , j , n ,k;

    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",(k+64));
        }
         printf("\n");
    }
}