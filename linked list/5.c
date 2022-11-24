// need correction



#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
}; 
/********************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*********************************/
void InsBeg(struct node **START, int x)
{
    struct node *p;
    p = GetNode();
    p->info = x;
    p->Next = (*START);
    (*START) = p;
}
/*************************************/
void InsAft(struct node **p, int x)
{
    struct node *q;
    q = GetNode();
    q->info = x;
    q->Next = (*p)->Next;
    (*p)->Next = q;
}
/**********************/
void InsEnd(struct node **START, int x)
{
    struct node *p, *q;
    p = GetNode();
    p->info = x;
    p->Next = NULL;

    q = (*START);
    while (q->Next != NULL)
    {
        q = q->Next;
    }
    q->Next = p;
    
}
/*******************************/
void OrderInsertion(struct node **START , int x){
    struct node*p , *q ;
    p  = *START ;
    q = NULL ;
    while ( p != NULL && p->info){
        q = p ;
        p = p->Next;

    }
    if (q =NULL){
        InsBeg(&(*START),x);
    }
    else 
    {
      InsAft (&q,x);
    }
    
}
/*******************/


struct node* mergell(struct node **start1 , struct node **start2 )
{
    struct node *p , *q ;
    struct node *start3 ;
    p = *start1 ;
    q = *start2 ;
    start3 = NULL;

    while ( p != NULL && q != NULL ){
        if ( p->info < q->info){
            InsEnd(&start3, p->info);
            p = p->Next;
        }
        else 
        {
            InsEnd(&start3,q->info);
            q = q->Next;
        }
    }
    while (p!=NULL ){
        InsEnd(&start3,p->info);
        p = p->Next ;

    }
    while( q != NULL){
        InsEnd(&start3,q->info);
        q = q->Next;
    }
    return start3 ;
}

/****************/
void Traverse(struct node** START)
{
  struct node *p;
  p=*START;
  while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->Next;
    }
}
/**********************/
int main()
{
    struct node *start1 ,*start2,*start3,*START ,*p , *q ;
  START = NULL;
    OrderInsertion(&start1 , 10);
    OrderInsertion(&start1 , 5);
    OrderInsertion(&start1 , 51);
    Traverse(start1);
    printf("\n");
    OrderInsertion(&start2 , 52);
    OrderInsertion(&start2 , 42);
    OrderInsertion(&start2 , 35);
    OrderInsertion(&start2 , 26);
    Traverse(start2);

}