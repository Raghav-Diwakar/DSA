#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define  TRUE 1
#define FALSE 0
struct queue
{
    int item[10];
    int rear,front;
};

void initialize(struct queue *q)
{
    q->front=0;
    q->rear=-1;
}

int isempty(struct queue *q)
{
    if ((q->rear-q->front+1)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void enqueue(struct queue *q,char x)
{
    if (q->rear==SIZE-1)
    {
        printf("Queue Overflows");
        exit(1);
    }
    q->rear++;
    q->item[q->rear]=x;
}

char dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("Queue Underflows ");
        exit(1);
    }
    char x;
    x=q->item[q->front];
    q->front=q->front+1;
    return x;
}
int main()
{   
    char y ;
    struct queue myq;
    initialize(&myq);
    enqueue(&myq,'A');
    enqueue(&myq,'B');
    enqueue(&myq,'D');
    enqueue(&myq,'E');
    enqueue(&myq,'F');
    enqueue(&myq,'G');
    enqueue(&myq,'H');
    enqueue(&myq,'I');
    enqueue(&myq,'G');
    enqueue(&myq,'H');
    // enqueue(&myq,'j');

    y = dequeue(&myq);
    printf("Deleted element %c \n ", y ) ;
    y = dequeue(&myq);
    printf("Deleted element %c \n ", y ) ;
    y = dequeue(&myq);
    printf("Deleted element %c \n ", y ) ;
    y = dequeue(&myq);
    printf("Deleted element %c \n ", y ) ;
}