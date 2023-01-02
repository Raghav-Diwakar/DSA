#include <stdlib.h>
#include <stdio.h>
#define stacksize 30
#define true 1
#define false 0

struct stack
{
    int item[stacksize];
    int top;
};
struct stack OpndStack;
struct stack OperatorStack;
struct stack s;

void Initialize()
{
    s.top = -1;
}

int IsEmpty()
{
    if (s.top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(int x)
{
    if (s.top == (stacksize - 1))
    {
        printf("Stack overflows");
        return;
    }
    s.top = s.top + 1;
    s.item[s.top] = x;
}

int pop()
{
    int x;
    if (s.top == -1)
    {
        printf("Stack underflows");
        return 0;
    }
    x = s.item[s.top];
    s.top = s.top - 1;
    return x;
}

// while (!exp)


int main()
{
    int x;
    Initialize(OperatorStack);
    Initialize(OpndStack);
    char exp[100] ;
    char symbol ;
    int i =  0 ;
    while(!exp ){
        symbol = exp[i];

        if (symbol == '*'||'/'||'+'||'-'||'%')
        {
            int x =  Makenode(symbol);
            push(x);

        }
        else {
            while (!IsEmpty(OperatorStack) && pcd(stackof(OperatorStack,symbol))){
              char  op = pop(OperatorStack);
                T = Makenode(op);
               int b = pop(OperatorStack);
                int a = pop (OpndStack);
                T->left = a ;
                T->right = b ;

            }
        }
    }
}