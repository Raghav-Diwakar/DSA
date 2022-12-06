#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *Next;
};

struct node *GetNode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **START, int x)
{
    struct node *p;
    p = GetNode();
    p->info = x;
    p->Next = (*START);
    (*START) = p;
}
void vowelfirst(struct node **START){
    struct node *p , *q ,*r;
    p = NULL;
    q = NULL;
    q = START;
    int x ;
while (q!=NULL)
{
    if (q->info=='a'||q->info=='e'||q->info=='i'||q->info=='o'||q->info=='u')
    {
        q=q->Next;
        if (p==NULL){
            if (r!= NULL){
                x = DelAft(r);
                InsBeg(START,x);
            }
            else {
                p = START ;
                r = p ;
            }
        }
        else 
        {
            x = DelAft(r);
            InsAft(p,x);
            p=p->Next;
        }
    }
    else{ 
    r = q ;
    q=q->Next;}
}
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
int DelBeg(struct node **START)
{
    struct node *p;
    int x;
    p = (*START);
    (*START) = (*START)->Next;
    x = p->info;
    free(p);
    return x;
}
/*************************************/
int DelAft(struct node **p)
{
    int x;
    struct node *q;
    q = (*p)->Next;
    (*p)->Next = q->Next;
    x = q->info;
    free(q);
    return x;
}

