#include<stdio.h>

int main(){
    // int  a =10 , b =30 ;
    // printf("%d",a,b);
    // int b = 2 ;
    // printf("%d\t%d\t%d\t%d",b,++b,b++,--b);
    char ch ;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);
    

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);

    return 0 ;
}