#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *Next;
};

struct node *start;
 
struct node *GetNode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void InsBeg(int x)
{
    struct node *p;
    p = GetNode();
    p->info = x;
    p->Next = start;
    start = p;
}
void InsAft(struct node **p, int x)
{
    struct node *q;
    q = GetNode();
    q->info = x;
    q->Next = (*p)->Next;
    (*p)->Next = q;
}

/*************************************/
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
void traverse()
{
    struct node *p;
    p = start;
    int count = 0;

    while (p != NULL)
    {

        printf("%d\n", p->info);
        p = p->Next;
        count++;
    }
    printf("no of count is %d", count);
}
int main()
{
    int count;
    start = NULL;
    InsBeg(100);
    InsBeg(200);
    InsBeg(300);
    InsBeg(400);
   
    traverse();
}