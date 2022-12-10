#include<stdio.h>
#include"LinkedList.h"
int main(){
    struct node *START, *p;
    START = NULL;
    EnQueue(&START,8);
    Traverse(START);
}