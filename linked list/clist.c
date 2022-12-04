
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    int exp;
    struct node *Next;
};
/********************/
struct node *GetNode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **CSTART, int x)
{
    struct node *p;
    p = GetNode();
    p->info = x;
    p->Next = (*CSTART)->Next;
    (*CSTART)->Next = p;
}
void InsAft(struct node **p, int x)
{
    struct node *q;
    q = GetNode();
    q->info = x;
    q->Next = (*p)->Next;
    (*p)->Next = q;
}
void InsEnd(struct node **CSTART, int x)
{
    struct node *p;
    p = GetNode();
    p->info = x;
    p->Next = (*CSTART)->Next;
    (*CSTART)->Next = p;
    *CSTART = p;
}
int DelBeg(struct node **CSTART)
{
    int x;
    struct node *p;
    p = (*CSTART)->Next;
    (*CSTART)->Next = p->Next;
    x = p->info;
    free(p);
    return x;
}
void DelEnd(struct node **CSTART)
{
    struct node *p;
};
void Traverse(struct node **CSTART)
{
    struct node *p;
    p = (*CSTART)->Next;
    while (p != CSTART)
    {
        printf("%d", p->info);
        p = p->Next;
    }
    printf("%d", p->info);
}

void main()
{
    struct node *CSTART;
    CSTART = NULL;
    InsBeg(&CSTART, 10);
    Traverse(&CSTART);
}