#include<stdio.h>
#include<stdlib.h>
struct node {
    int Data ;
    struct node *Child ;
    struct node *Sibling ;
};
struct node* MakeNode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->Data=x;
    p->Child=NULL;
    p->Sibling=NULL;
    return p;
}

void PreOrderTraversal (struct node *T){
    if (T != NULL){
        printf("%d",T->Data);
        PreOrderTraversal(T->Child);
        PreOrderTraversal(T->Sibling);
    }
}
void InOrderTraversal (struct node *T){
    if  ( T != NULL){
        InOrderTraversal(T->Child);
        printf("%d",T->Data);
        InOrderTraversal(T->Sibling);
    }
}
void PostOrderTraversal(struct node *T){
    if ( T != NULL ){
        if ( T != NULL){
            PostOrderTraversal(T->Child);
            PostOrderTraversal(T->Sibling);
            printf("%d",T->Data);
        }
    }
}
int CountN0(struct node *T){
    if ( T != NULL ){
        return 0 ;
    }
    else {
        // return 1 + CountN0(T->left) + CountN0(T->Right);
    }

}
void CreateTree(struct node **T)
{
        int choice , x ;
        struct node *p ;
        printf("%d left exists (1/0)",(*T)->Data );
        scanf("%d",&choice);
        // left
        if (choice ==1 ){
            printf("left data %d",(*T)->Data);
            scanf("%d",&x);
            p = MakeNode(x);
            (*T)->Child = p;
            CreateTree(&p);
        }
        int f , cchoice ;
        printf("%d sibling exists (1/0)",(*T)->Child);
        scanf("%d",&cchoice);
        if(cchoice==1){
            printf("enter sibling %d",(*T)->Child);
            scanf("%d",&f);
            p = MakeNode(f);
            (*T)->Sibling = p ;
            CreateTree(&p);
        }
        //right 
        // printf("%d right exists (1/0)",(*T)->Data );
        // scanf("%d",&choice);
        // if (choice ==1 ){
        //     printf("right data %d",(*T)->Data);
        //     scanf("%d",&x);
        //     p = MakeNode(x);
        //     (*T)->Sibling = p;
        //     CreateTree(&p);
        // }

};
int main (){
    int x ;
    struct node *p ;
    struct node *root = NULL ;
    printf("enter data of root node");
    scanf("%d",&x);
    root = MakeNode(x);

    CreateTree(&root);
    printf("Pre Order Traversal is :=> ");
    PreOrderTraversal(root);
    printf("\n In Order Traversal is :=> ");
    InOrderTraversal(root);
    printf("\n Post order Traversal is :=>");
    PostOrderTraversal(root);
    // printf("counting of nodes %d",CountN0);
}