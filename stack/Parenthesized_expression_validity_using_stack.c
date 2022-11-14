#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(char) ;
void pop() ;
void ftop() ;

int top = -1 ;
char  stack[100] ;

void  push (char a){
    stack[top] =  a;
    top++;

}
void pop (){
    if (top == -1 ){
        printf("expression is invalid ");
        exit(0);

    }
    else {
        top = top-1 ;

    }
}
void ftop(){
    if (top == -1 ){
        printf("expression is valid ");
    }
    else {
        printf("expression is  invalid ");
    }
}
int main(){
    int i   ;
    char a [100] ;
    printf("enter the expression ");
    scanf("%s",&a);
    for( i =  0 ; a[i]!='\0';i++){
        if (  a[i]=='('){
            push(a[i]);

        }
        else if (a[i] ==')'){
            pop();

        }
    }
    ftop();
    
}