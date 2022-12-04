#include<stdio.h>

int main(){
    char name[10];
    scanf("%d",name);
    printf("%s",name);
    return 0 ;
}
#include <stdio.h>
#include<string.h>

int main()
{ int i , j ;
int flag ;

    char str1[20];
    char str2[20];
    gets(str1);
    gets(str2);
    puts(str1);
    puts(str2);
    
    flag = 0 ;
    i = 0 ;
    while ( str1[i] != '\o' && str2[i] != '\0'){
        if ( str1[i] == str2[i])
        i++;
        else {
            flag =1 ;
            break ;
            
        }
    }
    if ( flag == 1)
    printf("not equal");
    else 
    printf("equal") ;
//     // scanf("%s",name);
//     // printf("%s",name);

//     gets(name);
//     puts(name) ;
//      i = 0 ;
//     while (name[i]!='\0')
//   { i = i +1 ;}
//   i = i-1 ;
//   j= 0 ;
//   while ( i < j ){
//       if ( name [j] != name [i])
//       {
//           flag = 1;
//           break ;
//       }
//       j++ ;
//       i-- ;
//   }
//   if ( flag == 1 )
//   printf(" palindrome");
//   else 
//   printf(" not palindrome");
   
    return 0;
} 



#include <stdio.h>
#include<string.h>

int main()
{ int i , j ;

    char name[20];
    // scanf("%s",name);
    // printf("%s",name);

    gets(name);
    puts(name) ;
     i = 0 ;
    while (name[i]!='\0')
    {i = i+1 ;}
    printf("%d",i);
     i = i-1 ;
     j = 0 ;
     while ( j< i ){
         char t = name[i];
         name[i] = name[j];
         name[j] = t ;
         j++ ;
         i-- ;
     }
    return 0;
}
#include<stdlib.h>
#include<stdio.h>
#define STACKSIZE 10 
#define TRUE 1 
#define FALSE 0 

struct stack
{
    int item [STACKSIZE];
    int Top ;
};

struct stack S ;
 void intialize ()
{
    S.Top = -1;
}
void IsEmpty (){
    if (S.Top = -1 )
    return TRUE ;
    else
    return FALSE ;
}
void Push(){
    int x ;
    if ( S.Top = STACKSIZE - 1)
    {
        printf("\nSTACKOVERFLOW");
        exit(1);
    }
    S.Top = S.Top + 1 ;
    S.item[S.Top] = x;
    
}

void pop(){
    int x ; 
    if (IsEmpty()){
        printf("\nstack overflow ");
        exit(1);
    }
    x= S.item (S.Top);
    S.Top = S.Top - 1 ;
    return x;
}
void stacksize(){
    int x ; 
    x = S.item(S.Top) ;
    return x;
    
}
int main() {
   int x ; 
   intialize();
   Push(100);
   Push(200);
   Push(300);
   
   x = pop(Top) ; 
   printf("%d",x);
   
    return 0;
}