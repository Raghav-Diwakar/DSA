#include<stdio.h>
#include "LinkedList.h"
int Count(struct node *START)
{
    struct node *p ;
    int count;
    p = START;
    count = 0 ;
    while (p != NULL)
    {   
        count++;
        // printf("-->%d", p->info);
        p = p->Next;
    }
    return count;
}
int main (){
    struct node *START ,*p;
    START= NULL;
    EnQueue(&START,10);
    EnQueue(&START,9);
    EnQueue(&START,5);
    EnQueue(&START,99);
    Traverse(START);
    printf("\n");
    DeQueue(&START);
    Traverse(START);
    printf("\n");
    int a= Count(START);
    printf("%d",a);
}