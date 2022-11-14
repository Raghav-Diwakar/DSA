#include <stdio.h>
#include <stdlib.h>
#define size 10

int top = -1;
int arr[size];
void push();
void pop();
void show();
void push()
{
    int x;
    if (top == size - 1)
    {
        printf("overflow");
    }
    else
    {
        printf("enter element to be inserted ");
        scanf("%d", &x);
        top  = top + 1;
        arr[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        printf("popped element is %d", arr[top]);
        top =  top -1 ;
    }
}
int main()
{
    int choice;

    while (1)
    {
        printf("\nStack function ");
        printf("\n1 Push the element\n2 Pop the element\n3 Show\n4 End");
        printf("\n\nEnter the number accordingly :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3: show();
        		break;
        case 4:
            exit(0);

        default:
            printf("\n You Entered Invalid choice \n");
        }
    }
}
void show()
{
	
	
	if(top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=top;i>=0;--i)
			printf("%d\n",arr[i]);
	}
}