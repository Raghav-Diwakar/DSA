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
int delafterk(struct node **START, int k)
{
    struct node *p, *q;
    int i, flag;
    p = START;
    i = 1;
    while (i <= k)
    {
        i = i + 1;
        if (p != NULL)
        {
            p = p->Next;
        }
        else
        {
            flag = 1;
            break;
        }
        if (flag == 1)
        {
            printf("Deletion is not possible");
        }
        else
        {
            q = START;
            if (p != NULL)
            {
                while (p->Next != NULL)
                {
                    q = q->Next;
                    p = p->Next;
                }
                DelAft(q);
            }
            else
            {
                DelBeg(START);
            }
        }
    }
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
int main()
{
    struct node *START, *p, *q;
    START = NULL;
}